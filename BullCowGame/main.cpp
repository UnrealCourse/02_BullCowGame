/* This is the console executable, that makes use of the BullCow class
This acts as the view in a MVC pattern, and is responsible for all
user interaction. For game logic see the FBullCowGame class.
*/
#pragma once

#include <iostream>
#include <string>
#include "FBullCowGame.h"

// to make syntax Unreal friendly
using FText = std::string;

// function prototypes as outside a class
void PrintIntro();
void PlayGame();
FText GetValidGuess();
void PrintResponseToGuess(EGuessStatus Status);
bool PlayerWantsToPlayAgain();
void PrintGameSummary();
FText GetPlayerGuess();

FBullCowGame BCGame; // instantiate a new game, which we re-use across plays

// the entry point for our application
int main()
{
	do
	{
		PrintIntro();
		PlayGame();
	}
	while (PlayerWantsToPlayAgain());

	return 0; // exit the application
}

void PrintIntro()
{
	std::cout << "Welcome to Bulls and Cows, a fun word game.\n";
	std::cout << std::endl;
	std::cout << "          }   {         ___ " << std::endl;
	std::cout << "          (o o)        (o o) " << std::endl;
	std::cout << "   /-------\\ /          \\ /-------\\ " << std::endl;
	std::cout << "  / | BULL |O            O| COW  | \\ " << std::endl;
	std::cout << " *  |-,--- |              |------|  * " << std::endl;
	std::cout << "    ^      ^              ^      ^ " << std::endl;
	std::cout << "Can you guess the " << BCGame.GetHiddenWordLength();
	std::cout << " letter isogram I'm thinking of?\n";
	std::cout << std::endl;
	return;
}

// plays a single game to completion
void PlayGame()
{
	BCGame.Reset(); //reset the game "instance"
	int32 MaxTries = BCGame.GetMaxTries();
	
	while (!BCGame.IsGameWon() && BCGame.GetCurrentTry() <= MaxTries)
	{
		FText Guess = GetValidGuess();
				
		// submit valid guess to the game, and receive counts
		FBullCowCount BullCowCount = BCGame.SubmitValidGuess(Guess);

		std::cout << "Bulls = " << BullCowCount.Bulls;
		std::cout << ". Cows = " << BullCowCount.Cows << "\n\n";
	}

	PrintGameSummary();
	return;
}

// loop continually until the user gives a valid guess
FText GetValidGuess()
{
	FText Guess = "";
	EGuessStatus Status = EGuessStatus::Invalid_Status;
	do
	{
		Guess = GetPlayerGuess();
		Status = BCGame.CheckGuessValidity(Guess);
		PrintResponseToGuess(Status);
	}
	while (Status != EGuessStatus::OK); // keep looping until we get no errors
	return Guess;
}

void PrintResponseToGuess(EGuessStatus Status)
{
	switch (Status)
	{
	case EGuessStatus::Wrong_Length:
		std::cout << "Please enter a " << BCGame.GetHiddenWordLength() << " letter word.\n\n";
		break;
	case EGuessStatus::Not_Isogram:
		std::cout << "Please enter a word witout repeating letters.\n\n";
		break;
	case EGuessStatus::Not_Lowercase:
		std::cout << "Please enter all lowercase letters.\n\n";
		break;
	default:
		// assume the guess is valid
		break;
	}
}

FText GetPlayerGuess()
{
	int32 CurrentTry = BCGame.GetCurrentTry();
	std::cout << "Try " << CurrentTry << " of " << BCGame.GetMaxTries();
	std::cout << ". Enter your guess: ";

	FText Guess;
	std::getline(std::cin, Guess);
	return Guess;
}

bool PlayerWantsToPlayAgain()
{
	std::cout << "Do you want to play again with the same hidden word (y/n)? ";
	FText Response = "";
	std::getline(std::cin, Response);
	return (Response[0] == 'y') || (Response[0] == 'Y');
}

void PrintGameSummary()
{
	if (BCGame.IsGameWon())
	{
		std::cout << "WELL DONE - YOU WIN!\n";
	}
	else
	{
		std::cout << "Better luck next time!\n";
	}
}

#pragma once


class FBullCowGame {
public:
	void Reset(); // TODO make a more rich return value.
	int GetMaxTries();
	int GetCurrentTry;
	bool IsGameWon();
	bool CheckGuessValidity(string); // TODO make a more rich return value.
	

// ^^ Please try and ignore this and focus on the interface above ^^
private:
	int MyCurrentTry;
	int MyMaxTries;
};
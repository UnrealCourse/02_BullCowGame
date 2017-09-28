### 1 Intro, Notes & Section 2 Assets ###

+ Welcome to the first actual coding video.
+ Why we’re doing this in the IDE only.
+ What you’ll be building, see resources.
+ You’ll learn types, loops, routines, classes.
+ We’ll follow Unreal’s coding style, and re-use.
+ Notes and resources are attached.

### 2 S02 Game Design Document (GDD) ###

+ How much planning should we do?
+ Define the emotional problem the game solves\*
+ Chose concept, rules & requirements.
+ Start to think about the architecture.
+ _Copy_ as much as possible into the code!
+ Document now what may change later.

**Useful Links**
+ \* [McConnell, Steve. _Code Complete._ Microsoft Press 2004. Chapter 3.3](https://www.amazon.com/gp/product/0735619670/)

### 3 How Solutions & Projects Relate ###

+ How projects and solutions relate.
+ Setting up a new command line project.
+ An overview of the structure of our solution.
+ (Adding main.cpp to our project).

### C++ Function Syntax ###

+ The difference between an engine and a library.
+ How this relates to this console application.
+ What is building / compiling code?
+ How the console knows where to find our code.
+ The syntax of a function in C++.
+ Write the minimal C++ program to remove error.
+ Testing our application runs without error.

### Using, #include and Namespaces ###

+ **#** represents a “preprocessor directive”.
+ **#include** copies-and-pastes other code.
+ The idea of using library code.
+ Use <> for standard libraries.
+ Use “ “ for files you have created yourself.
+ Notice the namespace icon in autocomplete.
+ Import **iostream** library and use **std** namespace.

### Magic Numbers and Constants ###

+ What a “magic number” is.
+ Why it’s a good idea to avoid them.
+ **constexpr** means “evaluated at compile time”.
+ Introduce coding standards\*.
+ Use a constant for the word length.

**Useful Links**
+ \* [Unreal Engine - Coding Standard](https://docs.unrealengine.com/latest/INT/Programming/Development/CodingStandard/index.html)

### Variables and cin for Input ###

+ The difference between **\n** and **endl**
+ Introducing pseudocode programming
+ Why we need to **#import \<string\>**
+ Getting input using **cin**
+ Discovering woes with our input buffer.

### Using getline() ###

+ Re-cap the problem we have.
+ Why **getline()** is useful here.
+ Where to find C++ documentation.
+ A word on non-obvious solutions.

### Simplifying With Functions ###

+ Programming is all about managing complexity.
+ We want to think about a few things at a time.
+ The idea of abstraction and encapsulation.
+ How functions help us simplify.
+ Write and call your first functions.
+ A warning about “side-effects” of functions.
+ Always use **return** at the end of your functions.

### Iterating With For & While Loops ###

+ Why we need loops.
+ When to use **for** vs **while**.
+ The syntax of a **for** loop.
+ Think carefully about the first & last loop.
+ Write a **for** loop to repeat the game.

### Clarity is Worth Fighting For ###

+ More about levels of abstraction.
+ A word on being clever.
+ Using Visual Studio’s Extract “Extract Function”
+ What a header file (.h) is.
+ What’s refactoring, and why we do it.
+ Removing side-effects.
+ Where to find the course code on GitHub.

### Booleans and comparisons ###

+ What a boolean is, and how to use it.
+ Only use when completely clear what you mean.
+ Use **==** for comparison.
+ Use **&&** for logical AND.
+ Use **||** for logical OR.
+ Use **[n]** to access a string, starting at n=0.
+ Use **‘ ‘** for characters, and **“ “** for strings.

### Using do and while in C++ ###

+ What a **do while** loop is.
+ How it executes code one or more times.
+ Making our game play multiple times.

### Introducing Classes ###

+ Lookup the Turing machine.
+ A quick overview of the MVC pattern.
+ User defined types (classes).
+ About working at an interface level (black box).
+ An overview of class **FBullCowGame**

### Using Header Files as Contracts ###

+ Introducing .h header files in C++.
+ Why the added complexity is worth it.
+ Defining the interface to our class.
+ Writing our first draft of FBullCowGame.h

### Including Our Own Header File ###

+ NEVER use using namespace in a .h
+ In fact, why use it at all?
+ Create your .cpp files and **#include**
+ Don’t create chains of includes.

### Instantiating Your Class ###

+ Relax, they’re just user defined types!
+ string FirstName; creates a string object
+ FBullCowGame BCGame; works the same way
+ These instances are initialised by “constructors”
+ Instantiating means “creating an instance of”
+ So we’re simply creating a game instance.

### Writing & Using Getter Methods ###

+ What is a getter method
+ Why we never access variables directly
+ How to call a method using the dot operator
+ Pros and cons of initialising in at compile time
+ Using “Rebuild Project” to make VS behave!

### Introducing the Const Keyword ###

+ **const**’s meaning depends on context
+ Generally means “I promise not to change this”
+ What this is depends on exactly where it appears
+ At the end of a member function, for example **int GetCurrentTry() const;** it prevents the function from modifying any member variables
+ This is a good safety feature.

### Constructors For Initialisation ###

+ Default constructor called when object created
+ Initialize in constructor when decided at runtime
+ Initialize in declaration if known at compile time
+ Constructor syntax simply: **ClassName()**;
+ Set the member variables in constructor
+ Test this has worked.

### Pseudocode Programming ###

+ More on Pseudocode Programming Practice (PPP)
+ Reviewing our code and architecture
+ Using **// TODO** as a comment prefix
+ Introducing Visual Studio’s Task List
+ Planning our next wave of coding.

### Using using for Type Aliases ###

+ We’re substituting types to be “Unreal ready”
+ The declaration is **using \<alias\> = \<type\>;**
+ For example **using int32 = int;**
+ Why Unreal uses **int32** rather than **int**
+ **FText** is for output, **FString** is “mutable”
+ Where to use each type of string
+ Map **FText** and **FString** to **std::string**

### Using struct for Simple Types ###

+ **struct** is almost identical to **class**
+ It’s member variables (data) is public by default
+ Ideal for simple value types like **BullCowCount**
+ Outline **BullCowCount SubmitGuess(FString)**

### 24 Using if Statements in C++ ###

+ Why we need conditionals (selection)
+ Use **if** when it reads better (e.g. few conditions)
+ Use **switch** for multiple, simple conditions
+ (for loads of statements consider a table lookup)
+ The syntax of an **if** statement
+ Using **if** to write count bulls and cows.

### Debugging 101 ###

+ A very brief intro to Visual Studio’s debugger
+ Set a break-point by clicking in margin
+ Watch values by highlighting in debug mode
+ Use “Continue” to cycle back to breakpoint.

### A Place for Everything ###

+ Centralising the hidden word length
+ Making this a property of the game class
+ Writing a getter to access this value
+ Updating our intro to vary with word length.

### Introducing enumerations ###

+ An **enum**erated type consists of named values
+ Use instead of coded meaning
+ Makes the code more readable and meaningful
+ Only defined values can be used - more robust
+ A benefit of C++ 11’s strongly typed enums
+ Creating an **enum class** for error checking.

### Writing Error Checking Code ###

+ Use **else if** for the first time
+ Outline or **CheckGuessValidity()** method
+ Write working code for checking guess length
+ Use the debugger to test the return values.

### Using switch Statements ###

+ Use our error values to communicate with user
+ All our user interaction is via **GameManager.cpp**
+ We’ll use **FText** in this file, as it’s UI text
+ We can “switch” what we say based on the error
+ The syntax of a **switch** statement
+ Remember your **break** keywords!

### Warm Fuzzy Feelings ###

+ _Don’t_ get comfortable with compiler warnings
+ Refactor **GetValidGuess()** to remove warning
+ Rename **SubmitGuess()** to **SubmitValidGuess()**
+ Improve readability of **SubmitValidGuess()**
+ Get a warm fuzzy feeling!

### Handling Game Win Condition ###

+ Change our **PlayGame()** loop to a **while**
+ Implement our **IsGameWon()** function

### Win or Lose "Screen" ###

Write a method to print a game summary to the screen once the game is over.

### Introducing Big O Notation ###

+ Algorithm: the recipe for solving a problem
+ or: 45th US Vice President’s dance style
+ Introducing the complexity of algorithms
+ A quick introduction to “Big O” notation
+ Comparing three ways of checking for isograms.

### TMap and map Data Structures ###

+ The importance of knowing your data types
+ Introducing the **std::map** data type
+ **#define TMap std::map** to keep it ‘Unreal’
+ How we’ll be using the map
+ **TMap\<char, bool\> LetterSeen;** to declare
+ Using **LetterSeen[Letter]** to access
+ Wiring-up and pseudocoding **IsIsogram()**

### Range-based for Loop ###

+ Introducing containers and iterators
+ Using a range-based for loop in Unreal\*
+ Gently introducing the auto keyword
+ Finishing our IsIsogram()

**Useful Links**

+ \* [Unreal Engine - Ranged Based For Loops](https://www.unrealengine.com/blog/ranged-based-for-loops)

### Design a Helper Function ###

+ Gain confidence with a multi-stage challenge
+ A word on implicit dependencies

### Playtesting Your Game ###

+ Having someone else play test your game is vital
+ Silently take notes, or record screen if possible
+ Immediately go away and fix obvious bugs
+ For improvements consider 2nd or 3rd opinion
+ Repeat until the bug / issue rate plateaus.

### Difficulty & Play Tuning ###

+ About the flow channel\*
+ **map** word length to max tries
+ Play test to determine correct difficulty.

**Useful Links**

+ \* Read more in [Sylvester, T. Designing Games - O’Reilly](https://www.amazon.com/dp/B00AWKX1FO/)

### Polishing & Packaging ###

+ First impressions count (think reviews)
+ Don’t ship a half-baked product, even if digital
+ Check through your code (polish)
+ Ship to your customers (package).

### Section 2 Wrap-Up ###

+ HUGE congratulations on your progress
+ Over 5 hours of pure C++ learning
+ Over 30 challenges you’ve completed
+ The journey has only just begun
+ Share your source code for others to play
+ Here are some suggested improvements
+ Next we take the game logic into Unreal :-)

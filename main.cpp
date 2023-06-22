#include <iostream>

template<typename ...T>
void ignoreUnused(T&&...) { }

/*
Project 2 - Part 1 / 1
video: Chapter 2 - Part 3
 Declarations Tasks

 Create a branch named Part1

 Purpose:  This project will teach you how to declare variables and free functions.  
 This will be the first project where the code you write will be compiled and you will be responsible for making sure it compiles before submitting it for review.
 
 
 1) Write down the names of the 6 major primitive types available in C++  here:
 
 int
 float
 unsigned int
 bool
 char
 double 
 
2) for each primitive type, write out 3 variable declarations inside the variableDeclaration() function on line 59.
    a) give each variable declaration an initial value
        - just ignore wchar_t. you do not need to declare 3 variables of type 'wchar_t'
        - 'void' is a return type. you do not need to declare 3 variables of type 'void'.
    b) at the end of the function, call ignoreUnused once and pass all of your variables to it. see line 71 for an example
 
3) Declare 10 free functions
    each declaration should have a random number of parameters in the function parameter list.
    When naming your parameters, choose names that are relevant to the task implied by the function's name.
    remember:
    Name functions what they do
        takeDogForWalk(int distanceInYards);
    Name variables what they are.
        int numStepsSinceStart;

4) add { ignoreUnused( ); } after each declaration in place of the closing semicolon
5) pass each of your function parameters to the ignoreUnused function like you did in b)
6) if your function returns something other than void, add 'return { };' at the end of it.
7) provide default values for an arbitrary number of parameters in the function parameter list.

8) consult the coding style guide found in the Readme.MD and adjust the formatting of your 10 functions.  At this point, you might have something that looks like this:
    float someFunc2(bool yes, int bar=2) { ignoreUnused(yes, bar ); return { }; }
    This does not conform with the coding standard for this course (check the Readme.MD) and needs to be corrected
    
9) in the main function at the end: 
    for each of those functions declared, 
        a) write out how the function would look if called with correct arguments
        b) if the function returned anything, store it in a local variable via the 'auto' keyword.
        c) pass the local variables to ignoreUnused() as you did in 2b)
    see main() for an example of this.
 
10) click the [run] button.  Clear up any errors or warnings as best you can.
 */

//2)
void variableDeclarations()
{
    //example:
    int number = 2; //declaration of a variable named "number", that uses the primitive type 'int', and the variable's initial value is '2'

    int volume = 5;
    int speed = 75;
    int damageDealt = -18;

    float probability = 0.f;
    float tablespoonsOfSalt = 1.5f;
    float hoursWorked = 8.24f;

    bool ateBreakfast = true;
    bool sleptEightHours = false;
    bool brushedTeeth = true;

    char breakfast = 'b';
    char lunch = 'l';
    char dinner = 'd';

    double pie = 3.14159;
    double wingspan = 3.5425;
    double poundsOfForce = 104.4314;

    unsigned int height = 72;
    unsigned int customerRating = 10;
    unsigned int numberOfBones = 206;
    
    ignoreUnused(number, volume, speed, damageDealt, probability, tablespoonsOfSalt, hoursWorked, ateBreakfast, sleptEightHours, brushedTeeth, breakfast, lunch, dinner, pie, wingspan, poundsOfForce, height, customerRating, numberOfBones); //passing each variable declared to the ignoreUnused() function
}

/*
 10 functions
 example:
 note: this example shows the result after completing steps 3-8
 */
bool rentACar(int rentalDuration, int carType = 0)  //function declaration with random number of arguments, arbitrary number of arguments have default value
{ 
    ignoreUnused(rentalDuration, carType); //passing each function parameter to the ignoreUnused() function
    return {}; //if your function returns something other than void, add 'return {};' at the end of it.
} 

/*
 1)
 */
int adjustVolume(bool canHear, unsigned int presentVolume, unsigned int audibleVolume = 5)
{
    ignoreUnused(canHear, presentVolume, audibleVolume);

    return {};
}
/*
 2)
 */
void speak(bool questionAsked, double extroversion)
{
    ignoreUnused(questionAsked, extroversion);
}
/*
 3)
 */
int minutesLeftToBake(int minutesInOven, int foodBeingBaked = 0)
{
    ignoreUnused(minutesInOven, foodBeingBaked);

    return {};
}
/*
 4)
 */
bool floodZone(double distanceToCoast, double elevation)
{
    ignoreUnused(distanceToCoast, elevation);

    return {};
}
/*
 5)
 */
void pickupSelection(int switchType, int switchPosition = 0)
{
    ignoreUnused(switchType, switchPosition);
}
/*
 6)
 */
float gripStrength(bool canCarry, bool awkwardToCarry, float objectWeight)
{
    ignoreUnused(canCarry, awkwardToCarry, objectWeight);

    return {};
}
/*
 7)
 */
bool sweetTooth(int daysWithoutSugar, int cravingScale)
{
    ignoreUnused(daysWithoutSugar, cravingScale);

    return {};
}
/*
 8)
 */
void colorBlindness(unsigned int colorsViewed, unsigned int colorsSeen)
{
    ignoreUnused(colorsViewed, colorsSeen);
}
/*
 9)
 */
void flexibility(int typeOfStretch = 0, unsigned int levelOfDifficulty = 0)
{
    ignoreUnused(typeOfStretch, levelOfDifficulty);
}
/*
 10)
 */
void walkTheDog(unsigned int hoursSinceLastWalk, int dogBreed = 0) 
{
    ignoreUnused(hoursSinceLastWalk, dogBreed);
}
/*
 MAKE SURE YOU ARE NOT ON THE MASTER BRANCH

 Commit your changes by clicking on the Source Control panel on the left, entering a message, and click [Commit and push].
 
 If you didn't already: 
    Make a pull request after you make your first commit
    pin the pull request link and this repl.it link to our DM thread in a single message.

 send me a DM to review your pull request when the project is ready for review.

 Wait for my code review.
 */

int main()
{
    //example of calling that function, storing the value, and passing it to ignoreUnused at the end of main()
    auto carRented = rentACar(6, 2); 
    
    //1)
    auto turnVolumeUp = adjustVolume(false, 2);
    //2)
    speak(true, 0.98);
    //person.speak();
    //3)
    auto whenToRemove = minutesLeftToBake(20, 3);
    //4)
    auto isAFloodZone = floodZone(47309.82737, 12.99993);
    //5)
    pickupSelection(1, 4);
    //guitar.pickupSelection();
    //6)
    auto hoistingAbility = gripStrength(true, true, 38.5);
    //7)
    auto dietDiscipline = sweetTooth(2, 10);
    //8)
    colorBlindness(25, 25);
    //person.colorBlindness();
    //9)
    flexibility(0, 5);
    //person.flexibility();
    //10)
    walkTheDog(5, 47);
    //person.walkTheDog();
    
    ignoreUnused(carRented, turnVolumeUp, whenToRemove, isAFloodZone, hoistingAbility, dietDiscipline);
    std::cout << "good to go!" << std::endl;
    return 0;    
}

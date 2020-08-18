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
 
 
 1) Write down the names of all of the primitives available in C++ (excluding wchar_t) here: 
 
 int
 float
 double
 char
 void
 bool
 unsigned int

2) for each primitive type, write out 3 variable declarations inside the variableDeclaration() function on line 59.
    a) give each variable declaration an initial value
        - just ignore wchar_t. you do not need to declare 3 variables of type 'wchar_t'
        - 'void' is a return type. you do not need to declare 3 variables of type 'void'.
    b) at the end of the function, pass each variable to a single call of the ignoreUnused function. see line 71 for an example
 



3) write out 10 functions
    a) each declaration should have a random number of parameters in the function parameter list.
        When naming your parameters, choose names that are relevant to the task implied by the function's name.
    b) add { ignoreUnused( ); } after each declaration in place of the closing semicolon
    c) pass each of your function parameters to the ignoreUnused function like you did in 2b)
    d) if your function returns something other than void, add 'return {};' at the end of it.
    
4) provide default values for an arbitrary number of parameters in the function parameter list.
    
5) in the main function at the end: 
    for each of those functions declared, 
        a) write out how the function would look if called with correct arguments
        b) if the function returned anything, store it in a local variable via the 'auto' keyword.
        c) pass the local variables to ignoreUnused() as you did in 2b)
    see main() for an example of this.
 
 6) click the [run] button.  Clear up any errors or warnings as best you can.
 */

//2)
void variableDeclarations()
{
    //example:
    int number = 2; //declaration of a primitive named 'number' with an initial value of '2'
    //int variables
    int negativeNumber = -101;
    int distanceMoved = 10;
    int averageSpeed = 40;
    
    
    
    
    
    
    
    ignoreUnused(number); //passing each variable declared to the ignoreUnused() function

    //float variables
    float outputGain = 1.0f;
    float inputVolume = 0.5f;
    float amplitude = -0.01f;
 

    //double variables
    double firstDouble = 5.03;
    double nextDouble = -0.2901;
    double lastDouble = 9.991;

    //char variables
    char firstLetter = 'a';
    char lastLetter = 'z';
    char secondLetter = 'b';

    
    //bool variables
    bool isPresent = true;
    bool refresh = false;
    bool reset = true;

    //unsigned int
    unsigned int maxVal = 65535;
    unsigned int minVal = 0;
    unsigned int randomVal = 10002;
    

    ignoreUnused(randomVal, 
                 minVal, 
                 maxVal, 
                 reset, 
                 refresh, 
                 isPresent, 
                 secondLetter, 
                 lastLetter, 
                 firstLetter, 
                 lastDouble, 
                 nextDouble, 
                 firstDouble, 
                 amplitude, 
                 inputVolume, 
                 outputGain, 
                 negativeNumber, 
                 distanceMoved, 
                 averageSpeed);

}
/*
 10 functions
 example:
 */
bool rentACar(int rentalDuration, int carType = 0)  //function declaration with random number of arguments, arbitrary number of arguments have default value
{ 
    ignoreUnused(rentalDuration, carType); //passing each function parameter to the ignoreUnused() function
    return {}; //if your function returns something other than void, add 'return {};' at the end of it.
} 

/*
 1)
 */
float calculateSpeed(float distanceTravelled = 20.0f, float timeTaken = 5.0f)
{
    ignoreUnused(distanceTravelled,timeTaken);
    return {};
}
/*
 2)
 */
float convertToCelsius (float tempInFarenheit = 32.f)
{
    ignoreUnused(tempInFarenheit);
    return {};
}
/*
 3)
 */
int incrementByOne (int number = 0)
{
    ignoreUnused(number);
    return {};
}
/*
 4)
 */
int findNegative (int number)
{
    ignoreUnused(number);
    return {};
}
/*
 5)
 */
float findSum (float num1, float num2, float num3=0.f, float num4=0.f,float num5=0.f)
{
    ignoreUnused(num1,num2,num3,num4,num5);
    return {};
}
/*
 6)
 */
float calculateCost (int numberOfUnits, float costPerUnit)
{
    ignoreUnused(numberOfUnits,costPerUnit);
    return {};
}
/*
 7)
 */
void turnOnLight(int brightness = 5)
{
    ignoreUnused(brightness);
}
/*
 8)
 */
bool heaterOn (int ambientTemp, int setTemp)
{
    ignoreUnused(ambientTemp, setTemp);
    return {};
}
/*
 9)
 */
float timeInSeconds(int timeInMilliseconds)
{
    ignoreUnused(timeInMilliseconds);
    return {};
}
/*
 10)
 */
void assignmentDone(bool isDone)
{
    ignoreUnused(isDone);
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
    
    auto speed = calculateSpeed(100.f, 20.f);
    
    //2)
    auto celsiusTemp = convertToCelsius(212.f);
    //3)
    auto newNumber = incrementByOne(10);
    //4)
    auto negNumber = findNegative(2410);
    //5)
    auto sum = findSum(12, 13, 3, 2);
    //6)
    auto totalCost = calculateCost(25, 10.07f);
    //7)
    turnOnLight(10);
    //8)
    auto currentState = heaterOn(25, 22);
    //9)
    auto seconds = timeInSeconds(34402);
    //10)
    assignmentDone(true);


    ignoreUnused(carRented,speed,celsiusTemp,newNumber,negNumber,sum,totalCost,currentState,seconds);

    std::cout << "good to go!" << std::endl;
    return 0;    
}

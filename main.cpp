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
    ignoreUnused(negativeNumber);
    ignoreUnused(distanceMoved);
    ignoreUnused(averageSpeed);
    
    
    
    
    
    ignoreUnused(number); //passing each variable declared to the ignoreUnused() function

    //float variables
    float outputGain = 1.0f;
    float inputVolume = 0.5f;
    float amplitude = -0.01f;
    ignoreUnused(outputGain);
    ignoreUnused(inputVolume);
    ignoreUnused(amplitude);

    //double variables
    double firstDouble = 5.03;
    double nextDouble = -0.2901;
    double lastDouble = 9.991;
    ignoreUnused(firstDouble);
    ignoreUnused(nextDouble);
    ignoreUnused(lastDouble);

    //char variables
    char firstLetter = 'a';
    char lastLetter = 'z';
    char secondLetter = 'b';
    ignoreUnused(firstLetter);
    ignoreUnused(lastLetter);
    ignoreUnused(secondLetter);
    
    //bool variables
    bool isPresent = true;
    bool refresh = false;
    bool reset = true;
    ignoreUnused(isPresent);
    ignoreUnused(refresh);
    ignoreUnused(reset);

    //unsigned int
    unsigned int maxVal = 65535;
    unsigned int minVal = 0;
    unsigned int randomVal = 10002;
    ignoreUnused(maxVal);
    ignoreUnused(minVal);
    ignoreUnused(randomVal);
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
    return (distanceTravelled/timeTaken);
}
/*
 2)
 */
float convertToCelsius (float tempInFarenheit = 32.f)
{
    float tempInCelsius = (5.f/9.f)*(tempInFarenheit-32);
    ignoreUnused(tempInCelsius);
    return (tempInCelsius);
}
/*
 3)
 */
int incrementByOne (int number = 0)
{
    return (number+1);
}
/*
 4)
 */
int findNegative (int number)
{
    return (number*-1);
}
/*
 5)
 */
float findSum (float num1, float num2, float num3=0.f, float num4=0.f,float num5=0.f)
{
    return (num1 + num2 + num3 + num4 + num5);
}
/*
 6)
 */
float calculateCost (int numberOfUnits, float costPerUnit)
{
    return (numberOfUnits * costPerUnit);
}
/*
 7)
 */
void turnOnLight(int brightness = 5)
{
    std::cout << "Light is on at brightness " << brightness <<"\n";
}
/*
 8)
 */
bool heaterOn (int ambientTemp, int setTemp)
{
    bool heaterState;
    if(setTemp > ambientTemp)
    {heaterState = true;}
    else
    {heaterState = false;}

    return (heaterState);
}
/*
 9)
 */
float timeInSeconds(int timeInMilliseconds)
{
    return(timeInMilliseconds/1000.f);
}
/*
 10)
 */
void assignmentDone(bool isDone)
{
    if(isDone)
    {std::cout<<"Awesome, everything works perfectly\n";}
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
    std::cout << "Function No. 1\n";
    float speed = calculateSpeed(100.f, 20.f);
    std::cout << "Speed =" << speed << "\n\n";
    //2)
    std::cout << "Function No. 2\n";
    float celsiusTemp = convertToCelsius(212.f);
    std::cout << "Temp in Celsius is " << celsiusTemp << "\n\n";
    //3)
    std::cout << "Function No. 3\n";
    int newNumber = incrementByOne(10);
    std::cout << "The new number is "
 << newNumber << "\n\n";
    //4)
    std::cout << "Function No. 4\n";
    int negNumber = findNegative(2410);
    std::cout << "The negative of the number is " << negNumber << "\n\n";
    //5)
    std::cout << "Function No. 5\n";
    auto sum = findSum(12, 13, 3, 2);
    std::cout << "The sum is " << sum << "\n\n";
    //6)
    std::cout << "Function No. 6\n";
    auto totalCost = calculateCost(25, 10.07f);
    std::cout << "The total cost is " << totalCost << "\n\n";
    //7)
    std::cout << "Function No. 7\n";
    turnOnLight(10);
    std::cout << "\n";
    //8)
    std::cout << "Function No. 8\n";
    bool currentState = heaterOn(25, 22);
    std::cout << "The current state of the heater is " << currentState <<"\n\n" ;
    //9)
    std::cout << "Function No. 9\n";
    float seconds = timeInSeconds(34402);
    std::cout << "Seconds = " << seconds << "\n\n";
    //10)
    std::cout << "Function No. 10\n";
    assignmentDone(true);
    std::cout<<"\n";


    ignoreUnused(carRented);
    std::cout << "good to go!" << std::endl;
    return 0;    
}

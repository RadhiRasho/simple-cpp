/*
! Tutorial Following Derek Banas' C++ Tutorial - https://www.youtube.com/watch?v=Rub-JsjMhWY
! This is a compilation of the code from the tutorial
! This is not original code
! This is not meant to be run
! This is meant to be a reference for future projects */

// Preprocessor directives
// Used to include libraries
// #include <iostream> // Input and output
// #include <string> // String functions
// #include <vector> // Vector functions
// #include <fstream> // File streams
// #include <limits> // Numeric limits

// using namespace std; // Used so you don't have to type std::cout << "Hello World";

#include <iostream>
#include <string>
#include <vector>
#include <fstream>
#include <limits>
#include <math.h>

using namespace std;

#pragma region Basics Of C++
void variables()
{
    const int64_t PI = M_PI;
    char myGrade = 'A';
    bool isHappy = true;
    int myAge = 39;
    float favNum = 3.141592;
    double otherfavNum = 1.6180339887;
    cout << "Favorite Number: " << favNum << endl;

    cout << "Size of int " << sizeof(myAge) << endl;
    cout << "Size of char " << sizeof(myGrade) << endl;
    cout << "Size of bool " << sizeof(isHappy) << endl;
    cout << "Size of float " << sizeof(favNum) << endl;
    cout << "Size of double " << sizeof(otherfavNum) << endl;

    int largestInt = 2147483647;
    cout << "Largest int " << largestInt << endl;

    // Arithmetic operators +, -, *, /, %, ++, --
    cout << "5 + 2 = " << 5 + 2 << endl;
    cout << "5 - 2 = " << 5 - 2 << endl;
    cout << "5 * 2 = " << 5 * 2 << endl;
    cout << "5 / 2 = " << 5 / 2 << endl;
    cout << "5 % 2 = " << 5 % 2 << endl;

    int five = 5;
    cout << "5++ = " << five++ << endl; // post increment operator, prints 5 then increments to 6
    cout << "++5 = " << ++five << endl; // pre increment operator, increments to 7 then prints 7
    cout << "5-- = " << five-- << endl; // post decrement operator, prints 7 then decrements to 6
    cout << "--5 = " << --five << endl; // pre decrement operator, decrements to 5 then prints 5

    five += 6;
    // +=, -=, *=, /=, %= are all valid operators
    cout << "five += 6, Results: " << five << endl;
    five /= 6;
    cout << "five /= 6, Results: " << five << endl;

    // Order of operations states * and / is performed before + and -
    cout << "1 + 2 - 3 * 2 = " << 1 + 2 - 3 * 2 << endl;
    cout << "(1 + 2 - 3) * 2 = " << (1 + 2 - 3) * 2 << endl;

    // You can cast variables by placing the data type in parenthesis before the value
    cout << "4 / 5 = " << 4 / 5 << endl;
    cout << "4 / 5 = " << float(4 / 5) << endl;

    // If you try to store a value outside the range of the data type it will overflow
    // and you won't end up with the number you thought you would
    short int shortInt = 32767;
    cout << "32767 + 1 = " << shortInt + 1 << endl;

    // You can also underflow and get a large negative number
    short int shortIntUnder = -32768;
    cout << "-32768 - 1 = " << shortIntUnder - 1 << endl;

    // You can define variables that don't change with the const prefix
    const int MY_CONST = 5;

    // Other types include
    // short int : At least 16 bits
    // long int : At least 32 bits
    // long long int : At least 64 bits
    // unsigned int : Same size as signed version
    // long double : Not less then double

    // You can also use scientific notation
    float f1 = 35e3;
    double d1 = 12E4;
    cout << f1 << endl;
    cout << d1 << endl;
}

void sizes()
{
    int myAge = 39;
    // You can use sizeof to find out how many bytes a value or type uses
    cout << "Size of int " << sizeof(myAge) << endl;

    // You can get the number of bytes in a variable with
    // sizeof(variablename)
    // You can also get the number of bytes in a type with
    // sizeof(datatype)
    // You can also use sizeof with strings and arrays
    // sizeof(arrayname)/sizeof(datatype)
    // sizeof(arrayname)/sizeof(arrayname[0])

    // You can use the numeric_limits function to get the max and min values
    // for a data type
    cout << "Min unsigned short int " << numeric_limits<unsigned short int>::min() << endl;
    cout << "Max unsigned short int " << numeric_limits<unsigned short int>::max() << endl;
    cout << "Min short int " << numeric_limits<short int>::min() << endl;
    cout << "Max short int " << numeric_limits<short int>::max() << endl;
    cout << "Min int " << numeric_limits<int>::min() << endl;
    cout << "Max int " << numeric_limits<int>::max() << endl;
    cout << "Min long " << numeric_limits<long>::min() << endl;
    cout << "Max long " << numeric_limits<long>::max() << endl;
    cout << "Min float " << numeric_limits<float>::min() << endl;
    cout << "Max float " << numeric_limits<float>::max() << endl;
    cout << "Min double " << numeric_limits<double>::min() << endl;

    // You can also get the number of digits used in each type
    cout << "Digits in double " << numeric_limits<double>::digits << endl;
}

void operations()
{
    // equality operators ==, !=, >, <, >=, <=
    // logical operators &&, ||, !
    // conditional operators ?:
    // bitwise operators &, |, ^, ~, <<, >>

    int age = 70;
    int ageAtLastExam = 16;
    bool isNotIntoxicated = true;

    if ((age >= 1) && (age < 16))
    {
        cout << "You can't drive" << endl;
    }
    else if (!isNotIntoxicated)
    {
        cout << "You can't drive" << endl;
    }
    else if (age >= 80 && ((age > 100) || ((age - ageAtLastExam) > 5)))
    {
        cout << "You can't drive" << endl;
    }
    else
    {
        cout << "You can drive" << endl;
    }

    // switch is used when you have limited options
    int greetingOption = 2;

    switch (greetingOption)
    {
    case 1:
        cout << "bonjour" << endl;
        break;
    case 2:
        cout << "Hola" << endl;
        break;
    case 3:
        cout << "Hallo" << endl;
        break;
    default:
        cout << "Hello" << endl;
    }

    // ternary operator condition ? true : false
    int largestNum = (5 > 2) ? 5 : 2;
    cout << "Largest Number " << largestNum << endl;
}

void arrays()
{
    int myFavNums[5];

    int badNums[5] = {4, 13, 14, 24, 34};

    cout << "Bad Number 1: " << badNums[0] << endl;

    char myName[5][5] = {{'R', 'a', 'd', 'h', 'i'},
                         {'R', 'a', 's', 'h', 'o'}};

    cout << "2nd letter in 2nd array " << myName[1][1] << endl;

    myName[0][2] = 'e';

    cout << "New Value " << myName[0][2] << endl;
}

void for_loops()
{

    for (int i = 1; i <= 10; i++)
    {
        cout << i << endl;
    }

    char myName[5][5] = {{'R', 'a', 'd', 'h', 'i'},
                         {'R', 'a', 's', 'h', 'o'}};

    for (int j = 0; j < 5; j++)
    {
        for (int k = 0; k < 5; k++)
        {
            cout << myName[j][k];
        }
        cout << endl;
    }
}

void while_loops()
{
    int randNum = (rand() % 100) + 1;

    while (randNum != 100)
    {
        cout << randNum << ", ";

        randNum = (rand() % 100) + 1;
    }

    // for loop example of a while loop

    int index = 1;

    while (index <= 10)
    {
        cout << index << endl;
        index++;
    }

    cout << endl;

    // do while loops are used when you want to execute the code at least once

    string numberGuessed;
    int intNumberGuessed = 0;

    do
    {
        cout << "Guess between 1 and 10: ";

        getline(cin, numberGuessed);

        intNumberGuessed = stoi(numberGuessed);

        cout << intNumberGuessed << endl;

    } while (intNumberGuessed != 4);

    cout << "You win" << endl;
}

void strings()
{
    char happyArray[6] = {'H', 'a', 'p', 'p', 'y', '\0'};
    string birthdayString = " Birthday";

    cout << happyArray + birthdayString << endl;

    string yourName;
    cout << "What is your name ";
    getline(cin, yourName);

    cout << "Hello " << yourName << endl;

    double eulersConstant = .57721;
    string eulerGuess;
    double eulerGuessDouble;

    cout << "What is Euler's Constant? ";
    getline(cin, eulerGuess);

    eulerGuessDouble = stod(eulerGuess);

    if (eulerGuessDouble == eulersConstant)
    {
        cout << "You are right" << endl;
    }
    else
    {
        cout << "You are wrong" << endl;
    }

    cout << "Size of string " << eulerGuess.size() << endl;

    cout << "Is string empty " << eulerGuess.empty() << endl;

    cout << eulerGuess.append(" was your guess") << endl;

    string dogString = "dog";
    string catString = "cat";

    cout << dogString.compare(catString) << endl;
    cout << dogString.compare(dogString) << endl;
    cout << catString.compare(dogString) << endl;

    string wholeName = yourName.assign(yourName);
    cout << wholeName << endl;

    string firstName = wholeName.assign(wholeName, 0, 5);
    cout << firstName << endl;

    int lastNameIndex = yourName.find("Rasho", 0);
    cout << "Index for last name " << lastNameIndex << endl;

    yourName.insert(5, " Justin");
    cout << yourName << endl;

    yourName.erase(6, 7);
    cout << yourName << endl;

    yourName.replace(6, 5, "Maximus");
    cout << yourName << endl;
}

void vectores()
{
    vector<int> lotteryNumVect(10);

    int lotteryNumArray[5] = {4, 13, 14, 24, 34};

    lotteryNumVect.insert(lotteryNumVect.begin(), lotteryNumArray, lotteryNumArray + 3);
    cout << lotteryNumVect.at(2) << endl;

    lotteryNumVect.insert(lotteryNumVect.begin() + 5, 44);
    cout << lotteryNumVect.at(5) << endl;

    lotteryNumVect.push_back(64);
    cout << "Final Value " << lotteryNumVect.back() << endl;

    lotteryNumVect.pop_back();

    cout << "First Value " << lotteryNumVect.front() << endl;
    cout << "Is empty " << lotteryNumVect.empty() << endl;
    cout << "Size " << lotteryNumVect.size() << endl;

    lotteryNumVect.clear();
    cout << "Size " << lotteryNumVect.size() << endl;

    vector<char> vowels;
}

#pragma endregion

#pragma region Functions

int addNumbers(int firstNum, int secondNum = 0)
{
    int combinedValue = firstNum + secondNum;
    return combinedValue;
}

int addNumbers(int firstNum, int secondNum, int thirdNum)
{
    return firstNum + secondNum + thirdNum;
}

int getFactorial(int number)
{
    int sum;
    if (number == 1)
        sum = 1;
    else
        sum = getFactorial(number - 1) * number;
    return sum;
}

#pragma endregion

#pragma region FileIO

int file_io()
{
    string steveQuote = "A day without sunshine is like, you know, night";

    ofstream writer("stevequote.txt");

    if (!writer)
    {
        cout << "Error opening file" << endl;
        return -1;
    }
    else
    {
        writer << steveQuote << endl;
        writer.close();
    }

    ofstream writer2("stevequote.txt", ios::app);

    // Open a stream to append to whats there with ios::app
    // ios::binary : Treat the file as binary
    // ios::in : Open a file to read input
    // ios::trunc : Default
    // ios::out : Open a file to write output

    if (!writer2)
    {
        cout << "Error opening file" << endl;
        return -1;
    }
    else
    {
        writer2 << "\n - Steve Martin" << endl;
        writer2.close();
    }

    char letter;

    ifstream reader("stevequote.txt");

    if (!reader)
    {
        cout << "Error opening file" << endl;
        return -1;
    }
    else
    {
        for (int i = 0; !reader.eof(); i++)
        {
            reader.get(letter);
            cout << letter;
        }
        cout << endl;
        reader.close();
    }

    return 0;
}

#pragma endregion

#pragma region Exception Handling

int exception_handling()
{
    int number = 0;

    try
    {
        if (number != 0)
        {
            cout << 2 / number << endl;
            return number;
        }
        else
            throw(number);
    }
    catch (int number)
    {
        cout << number << " is not valid" << endl;
        return number;
    }
}

#pragma endregion

#pragma region Pointers

void makeMeYoung(int *age)
{
    cout << "I used to be " << *age << endl;
    *age = 21;
}

void actYourAge(int &age)
{
    age = 39;
}

void pointers()
{
    int myAge = 39;
    char myGrade = 'A';

    cout << "Size of int " << sizeof(myAge) << endl;
    cout << "Size of char " << sizeof(myGrade) << endl;

    // & : Reference Operators : Address of operator : Returns address of variable following it (Used with pointers) : &myAge = 0x61ff08

    cout << "myAge is located at " << &myAge << endl;

    int myAge2 = 39;

    // * : Dereference Operator : Returns value stored at address following it (Used with pointers) : *address = 39

    int *agePtr = &myAge2;

    cout << "Address of pointer " << agePtr << endl;

    cout << "Data at memory address " << *agePtr << endl;

    int badNums[5] = {4, 13, 14, 24, 34};

    int *numArrayPtr = badNums;

    cout << "Address " << numArrayPtr << " Value " << *numArrayPtr << endl;

    numArrayPtr++;

    cout << "Address " << numArrayPtr << " Value " << *numArrayPtr << endl;

    cout << "Address " << badNums << " Value " << *badNums << endl;

    makeMeYoung(&myAge); // & : Address of operator : Returns address of variable following it (Used with pointers) : &myAge = 0x61ff08
    cout << "I'm " << myAge << " years old now" << endl;

    int &ageRef = myAge;

    cout << "myAge : " << myAge << endl;
    ageRef++;
    cout << "myAge : " << myAge << endl;

    actYourAge(ageRef);
}

#pragma endregion

#pragma region Classes

class Animal
{
    // attributes : height, weight, variables
    // capabilities : run, eat, functions
private:
    int height;
    int weight;
    string name;

    static int numOfAnimals;

public:
    // getters (accessors)
    int getHeight() { return height; }
    int getWeight() { return weight; }
    string getName() { return name; }

    // setters (mutators)
    void setHeight(int cm) { height = cm; }
    void setWeight(int kg) { weight = kg; }
    void setName(string animalName) { name = animalName; }

    // prototypes (declarations)
    // void setAll(int, int, string);

    // constructors (initializers)
    Animal(int, int, string);

    // destructor (clean up)
    ~Animal();

    // overloaded constructor
    Animal();

    // static methods
    static int getNumOfAnimals() { return numOfAnimals; }

    // methods
    void toString();
};

int Animal::numOfAnimals = 0;

Animal::Animal(int height, int weight, string name)
{
    this->height = height;
    this->weight = weight;
    this->name = name;
    Animal::numOfAnimals++;
}

Animal::~Animal()
{
    cout << "Animal " << this->name << " Destroyed" << endl;
}

Animal::Animal()
{
    Animal::numOfAnimals++;
}

void Animal::toString()
{
    cout << this->name << " is " << this->height << " cms tall and " << this->weight << " kgs in weight" << endl;
}

class Dog : public Animal
{
private:
    string sound = "woof";

public:
    void getSound()
    {
        cout << sound << endl;
    }

    Dog(int, int, string, string);

    Dog() : Animal(){};

    void toString();
};

Dog::Dog(int height, int weight, string name, string bark) : Animal(height, weight, name)
{
    this->sound = bark;
}

void Dog::toString()
{
    cout << this->getName() << " is " << this->getHeight() << " cms tall and " << this->getWeight() << " kgs in weight and says " << this->sound << endl;
}

void classes()
{
    Animal fred;

    fred.setHeight(33);
    fred.setWeight(10);
    fred.setName("Fred");

    cout << fred.getName() << " is " << fred.getHeight() << " cms tall and " << fred.getWeight() << " kgs in weight" << endl;

    Animal tom(36, 15, "Tom");

    cout << tom.getName() << " is " << tom.getHeight() << " cms tall and " << tom.getWeight() << " kgs in weight" << endl;

    Dog spot(38, 16, "Spot", "Woof");

    cout << "Number of Animals: " << Animal::getNumOfAnimals() << endl;

    spot.getSound();

    tom.toString();
    spot.toString();

    spot.Animal::toString();
}

#pragma endregion

int main()
{
    // variables();
    // sizes();
    // operations();
    // arrays();
    // for_loops();
    // while_loops();
    // strings();
    // vectores();
    // file_io();
    // exception_handling();
    // pointers();
    // classes();

    return 0;
}

// Read_Cmd.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include  <string>
using namespace std;

/*
Lees de groote van de array
Geef de grootte van de array terug.
*/
int sizeArray()
{
    int arraySize = 0;
    std::cout << "Aantal nummers: ";
    cin >> arraySize; //Aantal nummers
    return arraySize;
}

/*
Lees de ingevoerde waardes
Zet de ingevoerde waardes in een int array
*/
void valuesArray(int arraySize, int* input)
{
    for (int n = 0; n < arraySize; n++)
    {
        std::cout << "Waardes: ";
        cin >> input[n]; //Waardes voor die nummers
    }
}

/*
Print de geven waardes
Hij lees de array uit en print elke waardes los van elkaar.
*/
void printValues(int arraySize, int* input, string tekst)
{

    for (int n = 0; n < arraySize; n++)
    {
        std::cout << tekst << input[n] << std::endl; //Waardes die zijn ingevoerd.
    }
}

int main()
{
    int arraySize = sizeArray();
    int* input = new int[arraySize]; //Array voor die nummers
    valuesArray(arraySize, input);
    printValues(arraySize, input, "Input values: ");
}



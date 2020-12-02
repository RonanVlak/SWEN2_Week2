// Sorting_Feature_1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include  <string>
using namespace std;

int main()
{
    int arraySize;
    std::cout << "Aantal nummers: ";
    cin >> arraySize; //Aantal nummers
    int *input = new int[arraySize]; //Array voor die nummers

    for (int n = 0; n < arraySize; n++)
    {
        std::cout << "Waardes: ";
        cin >> input[n]; //Waardes voor die nummers
    }

    for (int n = 0; n < arraySize; n++)
    {
        std::cout << "Input " << input[n] << std::endl; //Waardes die zijn ingevoerd.
    }

    for (int i = 0; i < arraySize; i++) //Dit doet je voor hoe veel nummers er in de array zitten.
    {
        for (int x = i + 1; x < arraySize; x++)
        {
            if (input[i] > input[x]) //Als de voor de andere in de array grooter is wissellen ze van plek.
            {
                int temp = input[i]; 
                input[i] = input[x];
                input[x] = temp;
            }
        }
    }

    for (int n = 0; n < arraySize; n++)
    {
        std::cout << "Output" << input[n] << std::endl; //De gesorteerde waardes terug
    }
}


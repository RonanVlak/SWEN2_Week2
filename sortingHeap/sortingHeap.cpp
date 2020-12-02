// sortingHeap.cpp : This file contains the 'main' function. Program execution begins and ends there.
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

void createHeapTable(int* arr, int size, int location)
{
    int biggest = location;
    int left = 2 * location + 1;
    int right = 2 * location + 2;

    if (left < size && arr[left] > arr[biggest]) //Kijk of left child is hoger dan parent
    {
        biggest = left;
    }
    if (right < size && arr[right] > arr[biggest]) //Kijk of right child is hoger dan parent
    {
        biggest = right;
    }

    if (biggest != location) //Als aprent is aangepast check alles nog een keer
    {
        swap(arr[location], arr[biggest]);

        createHeapTable(arr, size, biggest);
    }
}

void heapSort(int* arr, int size)
{
    for (int i = size / 2 - 1; i >= 0; i--) // Pak het nummer van de parent en maak de kinderen aan
    {
        createHeapTable(arr, size, i);
    }

    for (int i = size - 1; i > 0; i--)  // Pak de laaste bit van de heapmap en 
    {
        swap(arr[0], arr[i]);

        createHeapTable(arr, i, 0);
    }

}

int main()
{
    int arraySize = sizeArray();
    int* input = new int[arraySize]; //Array voor die nummers
    valuesArray(arraySize, input);
    printValues(arraySize, input, "Input values: ");
    heapSort(input, arraySize);
    printValues(arraySize, input, "Output values: ");
}
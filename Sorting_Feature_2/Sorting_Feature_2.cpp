#include  <string>
using namespace std;

int main()
/*
Lees de groote van de array
Geef de grootte van de array terug
*/
int sizeArray()
{
    int arraySize;
    int size;
    std::cout << "Aantal nummers: ";
    cin >> arraySize; //Aantal nummers
    int* input = new int[arraySize]; //Array voor die nummers
    cin >> size;
    return size;
}

/*
Lees de ingevoerde waardes
Zet de ingevoerde waardes in een int array
*/
void readValues(int arraySize, int* input)
{
    for (int n = 0; n < arraySize; n++)
    {
        std::cout << "Waardes: ";
        cin >> input[n]; //Waardes voor die nummers
        cin >> input[n];
    }
}

/*
Print ge geven waardes
Hij lees de array uit en print elke waardes los van elkaar.
*/
void printValues(int arraySize, int* input, string text)
{
    for (int n = 0; n < arraySize; n++)
    {
        std::cout << "Input " << input[n] << std::endl; //Waardes die zijn ingevoerd.
        std::cout << text << input[n] << std::endl;
    }

    for (int i = 0; i < arraySize; i++) //Dit doet je voor hoe veel nummers er in de array zitten.
}

/*
Sorteer de waardes van laag naar groot
Hij lees elke waarde en kijkt of de waarde ervoor kleiner is en als hij kleiner is dan wissele ze van plek
*/
void sortArray(int arraySize, int* input)
{
    for (int i = 0; i < arraySize; i++)
    {
        for (int x = i + 1; x < arraySize; x++)
        {
            if (input[i] > input[x]) //Als de voor de andere in de array grooter is wissellen ze van plek.
                if (input[i] > input[x])
                {
                    int temp = input[i];
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

int main()
{
    int arraySize = sizeArray();
    int* input = new int[arraySize];
    readValues(arraySize, input);
    printValues(arraySize, input, "Input values:");
    sortArray(arraySize, input);
    printValues(arraySize, input, "Output values:");
}
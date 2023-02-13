#include <iostream>
#include <windows.h>
#include <CONio.h>

//Визначення іменного простору std::
using namespace std;
// отримання дескриптора консолі для зміни його властивостей
HANDLE console = GetStdHandle(STD_OUTPUT_HANDLE);

int main()
{
    SetConsoleTextAttribute(console, 13);
    cout << "The one-dimensional array A of size N is given (the size and elements of the array are from the keyboard). \nExtract all negative elements of array\n\n\n";
    int k = 0;
    int inc = 0;
    int n = 0;
    SetConsoleTextAttribute(console, 3);
    do
    {
        cout << "Enter the number of array elements -> ";
        cin >> n;
    } while (n < 1 || n>100);
    int* arr = new int[n];
    int* arr2 = new int[n];

    for (int i = 0; i < n; i++)
    {
        cout << "Enter number #" << i + 1 << " -> ";
        cin >> arr[i];
    }

    for (int i = 0; i < n; i++)
    {
        if (arr[i] < 0)
        {
            ++k;
        }
        else
        {
            arr2[inc] = arr[i];
            inc++;
        }
    }

    SetConsoleTextAttribute(console, 10);
    cout << "\nFinal array without negative elements:\n";
    SetConsoleTextAttribute(console, 14);
    for (auto i = 0; i < inc; i++)
    {
        cout << arr2[i] << "\t";
    }
    cout << "\n";
    SetConsoleTextAttribute(console, 10);
    cout << "Number of negative elements in array = " << k << endl;
    system("pause");
    delete[] arr;
    delete[] arr2;
    return 0;
}

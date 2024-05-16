#include <iostream>

using namespace std;

void display(int *arr, int sizeOfArray)
{
    for(int i=0; i<sizeOfArray; i++)
    {
        cout<<arr[i]<<", ";
    }
}

bool insertionSort(int *arr, int sizeOfArray)
{
    for(int i=1; i<sizeOfArray; i++)
    {
        int j;
        int x = arr[i];
        for(j = i-1; j >= 0 && arr[j] > x ; j--)
        {
            arr[j+1] = arr[j];
        }
        arr[j+1] = x;
    }
}

int main()
{
    int sizeOfArray = 8;
    int arr[sizeOfArray] = {1, 252, -3, 423, 5, -6, 12, -4};

    cout<<"Unsorted Array is = "<<endl;
    display(arr, sizeOfArray);

    cout<<endl;

    insertionSort(arr, sizeOfArray);

    cout<<endl<<"Sorted Array is = "<<endl;
    display(arr, sizeOfArray);

    return 0;
}

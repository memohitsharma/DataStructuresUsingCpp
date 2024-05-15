#include <iostream>

using namespace std;

void display(int *arr, int size)
{
    for(int i=0; i<size; i++)
    {
        cout<<arr[i]<<", ";
    }
}

void swap(int &x, int &y)
{
    int temp = x;
    x = y;
    y = temp;
}

bool bubbleSort(int *arr, int size)
{
    bool isAlreadySorted = false;

    for(int i=0; i<size-1; i++)
    {
        isAlreadySorted = true;
        for(int j = 0; j < size-i-1; j++)
        {
            if(arr[j] > arr[j+1])
            {
                swap(arr[j], arr[j+1]);

                if(isAlreadySorted == true)
                {
                    isAlreadySorted = false;
                }
            }

        }
        if(isAlreadySorted == true)
        {
            cout<<"Break from there as the Array is already sorted"<<endl;;
            break;
        }
    }
}

int main()
{
    int size = 8;
    int arr[size] = {1, 252, -3, 423, 5, -6, 12, -4};

    cout<<"Unsorted Array is = "<<endl;
    display(arr, size);

    cout<<endl;

    bubbleSort(arr, size);

    cout<<endl<<"Sorted Array is = "<<endl;
    display(arr, size);

    return 0;
}

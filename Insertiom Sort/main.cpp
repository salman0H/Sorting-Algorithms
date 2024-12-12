#include <iostream>
#include <random>
#include <iomanip>
#include <string>
using namespace std;

#define counter 10

int generateRandomNumber(int Min, int Max)
{
    random_device number;
    mt19937_64 gen(number());
    uniform_int_distribution<> dis(Min, Max);
    return dis(gen);
}

void stableInsrtionSort(int arr[counter])
{
    for(int i=0;i<counter;i++)
    {
        int v = arr[i];
        int j = i - 1;
        while(j>=0 && arr[j+1] < arr[j])
        {
            swap(arr[j+1],arr[j]);
            j -= 1;
        }
        arr[j + 1] = v;
    }
}

void unStableInsertionSort(int arr[counter])
{
    for(int i=1;i<counter;i++)
    {
        int key = arr[i];
        int j = i - 1;
        while(i>=0 && arr[j]>key)
        {
            arr[j+1] = arr[j];
            j -= 1;
        }
        arr[j+1] = key;
    }
}

void select(int line[counter])
{
    bool enter = 0;
    cout << "enter your kind if Insertion sort:" << endl;
    cout << setfill(' ') << setw(14) << "1. Stable" << endl;
    cout << setfill(' ') << setw(16) << "2. UNStable" << endl;
    cin >> enter;
    switch(enter){
    case 0:
        cout << endl;
        for(int i=0;i<120;i++)
        {
            cout << '=';
        }
        cout << endl;
        stableInsrtionSort(line);
        for(int i=0;i<counter;i++)
        {
            cout << '[' << i << "]: " << setfill(' ') << setw(4) << line[i] << " |" << '\t';
            if((i+1) % 2 == 0)
            {
                cout << endl;
            }
        }
    case 1:
        cout << endl;
        for(int i=0;i<120;i++)
        {
            cout << '=';
        }
        cout << endl;
        unStableInsertionSort(line);
        for(int i=0;i<counter;i++)
        {
            cout << '[' << i << "]: " << setfill(' ') << setw(4) << line[i] << " |" << '\t';
            if((i+1) % 2 == 0)
            {
                cout << endl;
            }
        }
    }

}

int main()
{
    int line[counter];
    cout << endl;
    random_device number;
    mt19937_64 gen(number());
    uniform_int_distribution<> dis(1, 100);
    for(int i=0;i<counter;i++)
    {
        line[i] = dis(gen);
        cout << '[' << i << "]: " << setfill(' ') << setw(4) << line[i] << " |" << '\t';
        if((i+1) % 2 == 0)
        {
            cout << endl;
        }
    }
    cout << endl;
    select(line);

    return 0;
}

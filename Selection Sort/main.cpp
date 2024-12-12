#include <iostream>
#include <random>
#include <iomanip>
using namespace std;
#define counter 10
///O(n^2)

void selectionSort(int arr[counter])
{
    for(int i=0;i<counter-1;i++)
    {
       int maxId = i;
       for(int j=i+1;j<counter;j++)
       {
           if(arr[maxId]>arr[j])
           {
               maxId = j;
           }
           swap(arr[i], arr[maxId]);
       }
    }
}

int main()
{
    int line[counter];
    cout << endl;
    random_device rand;
    mt19937_64 gen(rand());
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
        for(int i=0;i<120;i++)
        {
            cout << '=';
        }
    cout << endl;
    selectionSort(line);
    for(int i=0;i<counter;i++)
        {
            cout << '[' << i << "]: " << setfill(' ') << setw(4) << line[i] << " |" << '\t';
            if((i+1) % 2 == 0)
            {
                cout << endl;
            }
        }
    return 0;
}

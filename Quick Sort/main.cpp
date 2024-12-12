#include <iostream>
#include <random>
#include <iomanip>
using namespace std;

#define counter 10
///O(n^2)
int partitionBase(int arr[counter], int p, int r)
{
    int pivot = arr[p];
    int i = p + 1;
    int j = r;
    while(1)
    {
        while(i<=j && arr[i]<=pivot)
        {
            i++;
        }
        while(i<=j && arr[j]>=pivot)
        {
            j--;
        }
        if(i<j)
        {
            swap(arr[i], arr[j]);
        }else{
            break;
        }
    }
    swap(arr[i-1], arr[p]);
    return (i+1);
}

void partitionCLRS(int arr[counter], int p, int r)
{
    int pivot = arr[p];
    int i = p + 1;
    for(int j =p+1;j<r;j++)
    {
        if(arr[j]<pivot)
        {
            swap(arr[j], arr[i]);
            i++;
        }
    }
    swap(arr[p], arr[i-1]);
}

void partitionSedgwick(int arr[counter], int p, int q)
{
    int pivot = arr[p];
    int i = p+1;
    int j = q;
    int k = q;

    while(j>=i)
    {
        if(arr[j]>pivot)
        {
            swap(arr[j], arr[k]);
            j--;
            k--;
        }else if(arr[j] == pivot)
        {
            swap(arr[j], arr[i]);
            i++;
        }else if(arr[j]<pivot)
        {
            j--;
        }
        int m = min(i-p, k-j);
        swap(arr[p+m], arr[k-m]);
    }
}

void quickSort(int arr[counter], int p, int r)
{
    if(r>p)
    {
        int mid = partitionBase(arr,p,r);
        quickSort(arr,p,mid-1);
        quickSort(arr,mid,r);
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
    quickSort(line,0,counter);
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

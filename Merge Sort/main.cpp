#include <iostream>
#include <random>
#include <iomanip>
using namespace std;

#define counter 10
///O(n logn)

void merging(int p, int q, int r, int arr[counter])
{
    int n1 = q - p + 1;
    int n2 = r - q;
    int l[n1], m[n2];

    for(int i=0;i<n1;i++)
    {
        l[i] = arr[p+1];
    }
    for(int j=0;j<n2;j++)
    {
        m[j] = arr[q+1+j];
    }

    int i, j ,k;
    i = 0;
    j = 0;
    k = p;

    while(i<n1 && j<n2)
    {
        if(l[i]<=m[j])
        {
            arr[k] = l[i];
            i++;
        }else{
            arr[k] = m[j];
            j++;
        }
        k++;
    }

    while(i<n1)
    {
        arr[k] = l[i];
        i++;
        k++;
    }

    while(j<n2)
    {
        arr[k] = m[j];
        j++;
        k++;
    }
}

void mergeSort(int l, int r, int arr[])
{
    if(l<r)
    {
        int m = (r + l) / 2;
        mergeSort(l,m,arr);
        mergeSort(m+1,r,arr);

        merging(l,m,r,arr);
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
    mergeSort(0,counter-1,line);
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

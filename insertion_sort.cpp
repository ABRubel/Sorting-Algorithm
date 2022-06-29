#include<bits/stdc++.h>
using namespace std;

void print(int *a, int len=0)
{
    for (int i=0; i<len; i++)
    {
        cout<<a[i]<<endl;
    }
}

int main()
{
    int a[] = {4, 5, 6, 2, 9};
    int len = sizeof(a) / sizeof(a[0]);
    // print(a, len);
    for (int i=1; i<len; i++)
    {
        int key = a[i];
        int j = i-1;
        while (j >= 0 &&  a[j] > key)
        {
            a[j+1] = a[j];
            j--;
        }
        a[j+1] = key;
    }
    print(a, len);
    return 0;
}
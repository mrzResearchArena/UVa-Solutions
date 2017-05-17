#include <bits/stdc++.h>

using namespace std;

void SWAP(int *a, int *b)
{
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}

void b_sort(int box[], int n)
{
    int C = 0;
    for (int i=0; i<n-1; i++)
    {
        for (int j=0; j<n-i-1; j++)
        {
            if (box[j+1] < box[j])
            {
                SWAP(&box[j], &box[j+1]);
                C ++;
            }
        }
    }
    printf("Optimal train swapping takes %d swaps.\n", C);
}

int main()
{
    int test, test2;
    int box[50+10];
    cin >> test;
    while(test --)
    {
        cin >> test2;
        for (int i=0; i<test2; i++)
        {
            cin >> box[i];
        }
        b_sort(box, test2);
    }
    return 0;
}

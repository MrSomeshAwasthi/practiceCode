/*
10. Given a array A of numbers , write a linear time algorithm to compute array B, such
that B[i] = j, j is the smallest j > i such that A[j] < A[i].B[i] = n if all the numbers
to the right of A[i] are greater than or equal to A[i].
    In easy words:   for each element in the array A, we want to find the nearest element to its right that is smaller than the current element, and if no such element exists, we set B[i] to n.
*/
#include<bits/stdc++.h>
using namespace std;
int nxt_sml_inx(int a[],int size,int b[])
{
    stack<int> s;
    for (int i=0;i<size;i++)
    {
        while (!s.empty() && a[i]<a[s.top()])
        {
            b[s.top()]=i;
            s.pop();
        }
        s.push(i);
    }
    while (!s.empty())
    {
        b[s.top()]=size;
        s.pop();
    }
    return 1;
}
int main()
{
    int a[]={2, -4, 6, -3, 1, -9, 4, -1};
    int size=sizeof(a)/sizeof(a[0]);
    int b[size];
    nxt_sml_inx(a,size,b);
    for (auto i :b)
    {
        cout<<i<<" ";
    }
    cout<<endl;
    return 0;
}
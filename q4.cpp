/*
4.  Given a binary string S of length n, design a linear time algorithm to compute k,
such that the number of 0’s in S[0..k] is equal to number of 1’s in S[k+1..n-1].
*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
    string str="1011010110000";
    int pos=-1;
    for (int i=0;i<str.size();i++)
    {
        if (str[i]=='1')
        pos++;
    }
    cout<<"at position "<<pos<<" no of O's in lhs is equal to no of 1's";
    return 0;

}
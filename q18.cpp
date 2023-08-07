/*
18. Given a sequence of n numbers design a linear time algorithm to compute the length
of the maximum sum sub array.
*/
#include<bits/stdc++.h>
using namespace std;
int max_sum(int a[],int size)
{
    int msum=0,sum=0,len=0,mlen=0;
    for (int i=0;i<size;i++)
    {
        sum+=a[i];len++;
        if (sum>msum)
            {msum=sum;
             mlen=len;}
        if (sum<0)
            {sum=0;len=0;} 
    }
    cout<<msum<<endl;
    return mlen;
}
int main()
{
    int a[]={2, -4, 6, -3, 1, -9, 4, -1},size=sizeof(a)/sizeof(a[0]);
    cout<<max_sum(a,size)<<endl;
    return 0;
}
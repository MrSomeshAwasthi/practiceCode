/*
You are given an array of integers, there is a sliding window of size at most k which
is moving from left to right. You can only see at most k numbers in the window.
Each time the sliding window moves right by one position. Design an linear time
algorithm to compute the maximum in each window.
*/
#include<bits/stdc++.h>
using namespace std;
vector<int> maxw(int a[],int size, int k)
{
    deque  <int> dq;
    vector <int> ans;
    for(int i = 0 ;  i < size ; i++ )
    {
        while ( i > k-1 && !dq.empty() && i-k+1 > dq.front())
            dq.pop_front();
        while ( !dq.empty() && a[i]>=a[dq.back()])
            dq.pop_back();
        dq.push_back(i);
        if (i >= k-1)
        ans.push_back(a[dq.front()]);
    }
    return ans;
}
int main()
{   
    int a[]={7,2,3,9,6,5,1,4,8};
    int size=sizeof(a)/sizeof(a[0]);
    int k=3;
    vector <int> ans;
    ans=maxw(a,size,k);
    for (auto i : ans)
        {
            cout<<ans[i]<<"\t";
        }
    return 0;
}
// if(a[dq.back()]<a[i])
//         {
//             while ( !dq.empty()  &&  a[dq.back()]<a[i] )
//             {
//                 dq.pop_back();
//             }
//             dq.push_back(a[i]);
//         }
//         else if(a[dq.back()]>a[i])
//         {
//             dq.push_back(a[i]);
//         }
//         if(dq.size()>k)
//         {
//             dq.pop_front();
//         }
//         ans.push_back(a[dq.front()]);
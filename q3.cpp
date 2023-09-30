/*
3. Given a binary string of length n, design a linear time algorithm to compute the
length of the largest sub-string which contains equal number of 0’s and 1’s.
*/
#include<bits/stdc++.h>
using namespace std;
int find_max_length(vector <char>  vec)
{
    int max_len=0,sum=0;
    unordered_map <int,int> mp{{0,-1}};
    for(int i=0;i<vec.size();i++)
    {
        sum += (vec[i]=='0' ? -1 : 1);
        if (mp.count(sum)){
            max_len=max(max_len,i-mp[sum]);
        }
        else
        {
            mp[sum]=i;
        }
    }
    cout << max_len;
    return 0;
}
int main()
{
    string a;
    cout<<"enter : ";
    cin>>a;
    vector <char> vec;
    for(int i=0;i<a.size();i++)
    {
        vec.push_back(a[i]);
    }
    find_max_length(vec);
    return 0;
}

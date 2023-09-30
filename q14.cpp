/*
14. Given a sequence of n numbers, representing the stock prices of a stock on different
days, design a linear time algorithm to compute the maximum profit that you can
make by buying and selling a stock exactly once, you can sell a stock only after you
buy it.
*/
#include<bits/stdc++.h>
using namespace std;
int max_profit(vector<int> vec)
{
    int profit =0, minimum=vec[0],cost=0;
    for (int i=0;i<vec.size();i++)
    {
        cost=vec[i]-minimum;
        profit=max(profit,cost);
        minimum=min(minimum,vec[i]);
    }
    cout <<"the maximum profit 1 can generate is "<<profit<<endl;
    return 0;
}
int main()
{
    vector <int > vec={100, 180, 260, 310, 40, 535, 695};
    max_profit(vec);
    return 0;
}
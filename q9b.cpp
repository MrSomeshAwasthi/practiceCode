/*
You are given an array of integers, there is a sliding window of size at most k which
is moving from left to right. You can only see at most k numbers in the window.
Each time the sliding window moves right by one position. Design an linear time
algorithm to compute the maximum in each window.
*/
#include <bits/stdc++.h>
using namespace std;

vector<int> minw(vector<int> &nums, int k){
deque<int> dq;
vector<int> ans;
for(int i=0;i<nums.size();i++){

if(!dq.empty() && dq.front()==i-k)dq.pop_front();

while(!dq.empty() && nums[i]<nums[dq.back()]){
dq.pop_back();
}

dq.push_back(i);
if(i>=k-1)ans.push_back(nums[dq.front()]);
}
return ans;

}
int main() {
    vector<int> nums = { 7, 2, 3, 9, 6, 5, 1, 4, 8};
    int k = 2;

    vector<int> result = minw(nums, k);
    for(int x: result){
        cout<<x<<" ";
    }

    return 0;
}
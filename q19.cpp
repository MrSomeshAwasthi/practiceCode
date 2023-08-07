/*
Given a sequence of n numbers and an integer k, design a linear time algorithm to
compute the length of the maximum sum sub array , whos length is exactly k.
*/
#include <iostream>
#include <vector>
using namespace std;

vector<int> max_sum(int a[], int k, int size) {
  vector<int> vec;
  int sum = 0,maximum=0;
  for(int l = 0, r= 0;r < size;r++) {
      if ( (r-l) < k)
      {
        sum += a[r];
        if (r==k-1)
            vec.push_back(sum);
        if (sum>maximum)
          maximum=sum;
      } 
      else if ((r - l)  == k)
        {
          sum += a[r]-a[l];
          if (sum>maximum)
          maximum=sum;
          vec.push_back(sum);
          l++;
        }
    }
    cout<<"maximum sum:\t"<<maximum<<endl;
    cout<<"resultant array: ";
    return vec;
}

int main() {
  int a[] = {2, -4, 6, 3, 1, -9, 4, -1};
  int k = 4;
  int size = sizeof(a) / sizeof(a[0]);
  vector <int> vec = max_sum(a, k, size);
  for(int i = 0;i< vec.size();i++) cout<<vec[i]<<" ";
  cout<<endl;
  return 0;
}

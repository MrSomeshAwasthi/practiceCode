/*
    Given a sequence of n numbers and an integer k, design a linear time algorithm to
    compute the length of the maximum sum sub array , whos length is at least k.
*/
#include <iostream>
#include <vector>
using namespace std;

vector<int> max_sum_atleastk(int a[], int k, int size) {
    vector<int> vec(size+1,0);
    int sum = 0,max_len=0;
    for (int i=1;i<=size;i++)
        {
            vec[i]=vec[i-1]+a[i];
        }
    for (int i=0;i<size;i++)
        {   
            if (i>=k)
                {
                    sum=vec[i]+vec[i-k];
                    max_len=max(max_len,)
                }
        }
    cout<<"maximum length:\t"<<max_len<<endl;
    cout<<"resultant array: ";
    return vec;
}

int main() {
  int a[] = {2, -4, 6, 3, 1, -9, 4, -1};
  int k = 4;
  int size = sizeof(a) / sizeof(a[0]);
  vector <int> vec = max_sum_atleastk(a, k, size);
  for(int i = 0;i< vec.size();i++) cout<<vec[i]<<" ";
  cout<<endl;
  return 0;
}
/*
2. Given a binary string of length n, design a linear time algorithm to compute the
length of the largest dense sub-string of the given string.
*/
#include<bits/stdc++.h>
using namespace std;

int longestDenseBinarySubstring(const string &binaryString) {
    int n = binaryString.length();
    int maxLength = 0;

    int onesCount = 0, zerosCount = 0;
    int start = 0;

    for (int i = 0; i < n; ++i) {
        if (binaryString[i] == '1') 
        {
            onesCount++;
        }
        else 
        {
            zerosCount++;
        }

        while (zerosCount >= onesCount) {
            if (binaryString[start] == '1') {
                onesCount--;
            } else {
                zerosCount--;
            }
            start++;
        }

        maxLength = max(maxLength, i - start + 1);
    }

    return maxLength;
}

int main() {
    string binaryString;
    cout << "Enter a binary string: ";
    cin >> binaryString;
    int result = longestDenseBinarySubstring(binaryString);
    cout << "Length of the longest dense binary substring: " << result << endl;

    return 0;
}

/*
Count pairs in array whose sum is divisible by 4
Given a array if ‘n’ positive integers. Count number of pairs of integers in the array that have the sum divisible by 4.

Example 1
Input: {2, 2, 1, 7, 5}
Output: 3
Explanation
Only three pairs are possible whose sum is divisible by '4' i.e., (2, 2), (1, 7) and (7, 5)
Example 2
Input: {2, 2, 3, 5, 6}
Output: 4
*/

#include <iostream>

using namespace std;

int countDivPairs(int[], int, int);

int main() {
  int a[] = {2, 2, 3, 6, 5};
  int sum = 4;
  int size = sizeof(a) / sizeof(a[0]);
  int pairCount = countDivPairs(a, size, sum);
  cout<<pairCount<<endl;
}

int countDivPairs(int a[], int size, int sum) {
  int frequency[sum] = { 0 };
  int pairs = 0;
  int rem = 0;
  for(int i = 0; i<size; i++) {
    rem = a[i]%sum;
    pairs += frequency[(sum - rem)% sum];
    frequency[rem]++;
  }
  return pairs;
}
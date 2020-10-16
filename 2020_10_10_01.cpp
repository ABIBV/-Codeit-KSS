/*
  1.​ Given an array of integers ​ nums​ containing ​ n + 1​ integers where each integer is in the range ​ [1, n]
  inclusive.
  There is only one duplicate number in ​ nums​ , return ​ this duplicate number ​ .
  Follow-ups:
  1. How can we prove that at least one duplicate number must exist in ​ nums​ ?
  2. Can you solve the problem without modifying the array ​ nums​ ?
  3. Can you solve the problem using only constant, ​ O(1)​ extra space?
  4. Can you solve the problem with runtime complexity less than ​ O(n​ 2 ​ ) ​ ?
  Example 1:
  Input: nums = [1,3,4,2,2]
  Output: 2
  Example 2:
  Input: nums = [3,1,3,4,2]
  Output: 3
  Example 3:
  Input: nums = [1,1]
  Output: 1
  Example 4:
  Input: nums = [1,1,2]
  Output: 1
  Constraints:● 2 <= n <= 3 * 10​ 4
  ● nums.length == n + 1
  ● 1 <= nums[i] <= n
  ● All the integers in ​ nums​ appear only once except for precisely one integer which appears two
  or more times
*/

#include <iostream>
using namespace std;

int findDuplicate(int arr[], int size) {
  int totalCount = (size * (size + 1)) / 2;
  int totalSum = 0;
  for(int i=0; i<size+1; i++) {
    totalSum += arr[i];
  }
  return totalSum - totalCount;
}

int main() {
  int nums[] = {3, 1, 3, 4, 2};
  int size = (sizeof(nums) / sizeof(nums[0])) - 1;
  int duplicate = findDuplicate(nums, size);
  cout<<duplicate;
}

#include <iostream>
using namespace std;

int *sortedMerge(int arr1[], int arr2[], int s1, int s2) {
  int totalIndex = s1 + s2;
  int i, j;
  i = s1-1;
  j = s2-1;
  while(totalIndex>=0) {
    if((arr1[i] > arr2[j]) && i>=0){
      arr1[totalIndex-1] = arr1[i];
      i--;
    } else if(j>=0) {
      arr1[totalIndex-1] = arr2[j];
      j--;
    }
    totalIndex--;
  }
  return arr1;
}

int main() {
  int m,n,i,j;
  cout<<"\nEnter the size of Array 1 : ";
  cin>>m;
  cout<<"\nEnter the size of Array 2 : ";
  cin>>n;
  int arr1[m+n] = {0};
  int arr2[n];
  cout<<"\nEnter array 1 elements : ";
  for(i=0; i<m; i++) cin>>arr1[i];
  cout<<"\nEnter array 2 elements : ";
  for(i=0; i<n; i++) cin>>arr2[i];
  int *arr;
  arr = sortedMerge(arr1, arr2, m, n);
  for(i=0; i<m+n; i++) cout<<*(arr+i)<<" ";
  return 0;
}
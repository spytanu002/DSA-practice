
#include<bits/stdc++.h>
#include<iostream>
using namespace std;

// left roated by the one 
/*
vector<int> rotatedArray(vector<int> &arr, int n){

int temp = arr[0];

for (int i = 1; i<n; i++){
arr[i-1]=arr[i];
}
arr[n-1]= temp;
return arr;
}

int main() {
  vector<int> arr = { 1, 2, 3, 4, 5};

  int n = arr.size();

  arr=rotatedArray(arr, n);

  for (int x:arr){
    cout <<x <<" ";
  }
  return 0;
}
*/


//left roated by the D places 

void leftroadted(int arr[], int n, int d){ 
d = d % n; 

int temp[d];
for (int i = 0; i <d; i++){
  temp[i] = arr[i];
}

for (int i = d;  i<n; i++){
  arr[i - d] = arr [i];
}

for (int i = n-d; i<n; i++){
  arr[i] = temp[i-(n-d)];
}
}

int main() {
  int n ;
  cin >> n;

  int arr[1000];
  for (int i = 0; i <n; i++){
  cin >> arr[i];
  }
  
  int d;
  cin >> d;
  leftroadted(arr, n, d);
  
   for (int i =0; i<n; i++){
  cout << arr[i] << " ";
  }
  return 0;
}

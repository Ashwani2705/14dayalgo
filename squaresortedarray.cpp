// Given an integer array arr sorted in non-decreasing order,
//  return an array of the squares of each number sorted in non-decreasing order.
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void sortedarray(int arr[],int n){
     for(int i=0;i<n;i++){
            arr[i]=arr[i]*arr[i];
       }
        sort(arr,arr+n);
         for(int i=0;i<n;i++){
        cout<<arr[i]<<" -> ";
    }
}
int main(){
    int n;
    cin>>n;
   int arr[n];
   for(int i=0;i<n;i++){
       cin>>arr[i];

   }
    sortedarray(arr,n);
}
// Given a sorted array of distinct integers and a target value,
//  return the index if the target is found.
//   If not, return the index where it would be if it were inserted in order.

// You must write an algorithm with O(log n) runtime complexity.
#include<bits/stdc++.h>
using namespace std;

     int searchInsert(int arr[],int n ,int target) {
        int s = 0, e = n-1, mid;
        while(s <= e){
            mid = ( s + e ) / 2;
            if(arr[mid] == target) return mid;
            if(arr[mid] < target) s = mid + 1;
            else e = mid - 1;
        }
        return s;
}
int main(){
    cout<<"Enter the size of the array ->";
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"Enter the element to be searched->";
    int x;
    cin>>x;

    cout<<"position"<<searchInsert(arr,n,x);
}
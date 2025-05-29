#include<iostream>
using namespace std;
bool search(int arr[], int start, int end, int target){
    if(start>end){
        return false;
    }
    int mid = start+(end-start)/2;
    if(arr[mid] == target){
        return true;
    }
    else if(arr[mid]>target){
        return search(arr,start,mid-1,target);
    }
    else{
        return search(arr,mid+1,end,target);
    }
}
int main(){
    int arr[] = {1,2,3,4,5,6,7,8,9,10};
    int target;
    cin>>target;
    int n = sizeof(arr)/sizeof(arr[0]);
    search(arr,0,n-1,target)?cout<<"Found":cout<<"Not found";
}

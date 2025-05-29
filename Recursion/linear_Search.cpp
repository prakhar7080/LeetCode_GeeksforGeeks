#include<iostream>
using namespace std;
bool search(int arr[], int i, int n, int target){
    if(i>=n){
        return false;
    }
    if(arr[i] == target){
        return true;
    }
    return search(arr,i+1,n,target);
}
int main(){
    int arr[] = {1,2,3,4,5};
    int target;
    cin>>target;
    search(arr,0,5,target)?cout<<"Found":cout<<"Not found";
}

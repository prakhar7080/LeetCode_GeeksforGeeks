#include<iostream>
using namespace std;
int maximum(int arr[], int i, int n){
    if(i>=n-1){
        return arr[i];
    }
    return max(arr[i],maximum(arr,i+1,n));
}
int main(){
    int arr[] = {1,2,6,5325,2};
    int n = 5;
    int maxi = maximum(arr,0,n);
    cout<<"Maximum element : "<<maxi<<endl;
}

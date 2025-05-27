#include<iostream>
#include<limits.h>
using namespace std;
// int min(int arr[], int i, int n, int m){
//     if(i>=n){
//         return m;
//     }
//     if(m>arr[i]){
//         m = arr[i];
//     }
//     return min(arr,i+1,n,m);
// }
int min(int a, int b){
    if(a>b){
        return b;
    }
    return a;
}
int minimum(int arr[], int i, int n){
    if(i == n-1){
        return arr[i];
    }
    return min(arr[i],minimum(arr,i+1,n));
}

int main(){
    int arr[] = {1,2,-5,0,5};
    int m = minimum(arr,0,5);
    cout<<"Minimaum Element is : "<<m<<endl;
}

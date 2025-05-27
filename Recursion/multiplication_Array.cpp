#include<iostream>
using namespace std;
int multiplication(int arr[], int i, int n){
    if(i>=n){
        return 1;
    }
    return arr[i]*multiplication(arr,i+1,n);
}
int main(){
    int arr[] = {1,2,3,4,5};
    int n = 5;
    cout<<"Multiplication : "<<multiplication(arr,0,n)<<endl;
}

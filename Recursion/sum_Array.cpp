#include<iostream>
using namespace std;
void sum(int arr[],int i, int n, int &s){
    if(i>=n){
        return;
    }
    s+=arr[i];
    sum(arr,i+1,n,s);
}
int main(){
    int arr[] = {1,2,3,4,5};
    int s = 0;
    sum(arr,0,5,s);
    cout<<"Sum : "<<s<<endl;
}

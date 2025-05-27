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
/*
#include<iostream>
using namespace std;
int sum(int arr[],int i, int n){
    if(i>=n){
        return 0;
    }
    return arr[i]+sum(arr,i+1,n);
}
int main(){
    int arr[] = {1,2,3,4,5};
    int s = sum(arr,0,5);
    cout<<"Sum : "<<s<<endl;
}
*/

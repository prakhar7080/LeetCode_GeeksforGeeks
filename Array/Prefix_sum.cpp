#include<iostream>
#include<vector>
using namespace std;

int main(){
    int arr[] = {6,4,5,-3,2,8};
    int n = 6;

    vector<int>prefix(n);
    prefix[0] = arr[0];
    for(int i=1;i<n;i++){
        prefix[i] = prefix[i-1]+arr[i];
    }
    cout<<"Prefix Sum : "<<endl;
    for(int i=0;i<n;i++){
        cout<<prefix[i]<<" ";
    }
}

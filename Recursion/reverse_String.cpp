#include<iostream>
using namespace std;
void reverse(string &str,int i,int j){
    if(i >= j){
        return;
    }
    char ch = str[i];
    str[i] = str[j];
    str[j] = ch;
    reverse(str,i+1,j-1);
}
int main(){
    string str;
    cin>>str;
    reverse(str,0,str.length()-1);
    cout<<"Reversed String : "<<str;
}

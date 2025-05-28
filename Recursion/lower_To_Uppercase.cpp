#include<iostream>
using namespace std;
void upper(string &str,int i,int j){
    if(i>j){
        return;
    }
    if(str[i]>='a' && str[i]<='z'){
        str[i] = str[i] - 32;
    }
    upper(str,i+1,j);
}
int main(){
    string str;
    cin>>str;
    upper(str,0,str.length()-1);
    cout<<"Upper Case : "<<str;
}

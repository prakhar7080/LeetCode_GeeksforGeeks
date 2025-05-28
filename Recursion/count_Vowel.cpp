#include<iostream>
using namespace std;
int count(string str, int i){
    if(i>str.length()-1){
        return 0;
    }
    if(str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u'){
        return 1 + count(str,i+1);
    }
    return count(str,i+1);
}
int main(){
    string str;
    cin>>str;
    cout<<"No of vowels : "<<count(str,0);
}

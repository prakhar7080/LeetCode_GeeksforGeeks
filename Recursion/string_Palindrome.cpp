#include<iostream>
using namespace std;
bool isPalindrome(string str, int start, int end){
    if(start >= end){
        return true;
    }
    if(str[start] != str[end]){
        return false;
    }
    return isPalindrome(str,start+1,end-1);
}
int main(){
    string str;
    cin>>str;
    isPallindrome(str,0,str.length()-1) ? cout<<"Palindrome" : cout<<"Not palindrome";
}

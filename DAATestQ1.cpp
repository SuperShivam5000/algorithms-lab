#include <bits/stdc++.h>
using namespace std;

string reverseString(string s){
    int n=s.length();
    int i=0,j=n-1;
    while(i<j){
        swap(s[i],s[j]);
        i++;
        j--;
    }
    return s;
}

void reverseallstring(string arr[],int n){
    for(int i=0;i<n;i++){
        arr[i]=reverseString(arr[i]);
    }
    cout<<"All Reversed Strings"<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<endl;
    }
}

bool compareString(string s1, string s2){
    int m;
    if(s1.length()>s2.length()) m=s2.length();
    else m=s1.length();
    for(int i=0;i<m;i++){
        if(s1[i]>s2[i]) return true;
    }
    if(s1.length()>s2.length()) return true;
    return false;
}

void arrangereversedictionary(string arr[],int n){
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            if(compareString(arr[i],arr[j])) swap(arr[i],arr[j]);
        }
    }
    cout<<"Reverse Dictionary Order"<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<endl;
    }
}

int main(){
    string arr[]={"adi","arno","rishi","soumya"};
    int n = sizeof(arr)/sizeof(arr[0]);
    reverseallstring(arr,n);
    arrangereversedictionary(arr,n);
}
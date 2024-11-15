#include <bits/stdc++.h>
using namespace std;

void printlength(string arr[],int n){
    for(int i=0;i<n;i++){
        cout<<"Length of "<<arr[i]<<" is "<<arr[i].length()<<endl;
    }
}
void arrangedescending(string arr[],int n){
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i].length()<arr[j].length()) swap(arr[i],arr[j]);
        }
    }

    //print
    cout<<"Array in descending order of length: "<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<endl;
    }
}

int main(){
    string arr[]={"Adi","Arno","Rishi","Soumya","Ankit","Hrushikesh"};
    int n = sizeof(arr)/sizeof(arr[0]);
    printlength(arr,n);
    arrangedescending(arr,n);
}
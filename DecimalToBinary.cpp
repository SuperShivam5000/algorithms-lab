#include<iostream>
using namespace std;

int Binary(int n){
    if (n == 0){
      return 0;
    }
    else{
        return (n % 2 + 10 * (Binary(n / 2)));
    }
      
}

int main(){
    int n;
    cin>>n;
    cout<<Binary(n)<<endl;
    return 0;
}
#include <bits/stdc++.h>
using namespace std;

void sortarr(int arr[][3],int n){
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            if(arr[j][2]<arr[i][2]){
                swap(arr[j][0],arr[i][0]);
                swap(arr[j][1],arr[i][1]);
                swap(arr[j][2],arr[i][2]);
            }
        }
    }
}

int main(){
    int n=14;
    int arr[n][3]={{0, 1, 4}, {0, 7, 8}, {1, 2, 8}, {1, 7, 11}, {2, 3, 7}, {2, 8, 2}, {2, 5, 4}, {3, 4, 9}, {3, 5, 14}, {4, 5, 10}, {5, 6, 2}, {6, 7, 1}, {6, 8, 6}, {7, 8, 7}};
    sortarr(arr,n); //sort in accordance with weight
    set<int> mySe
}
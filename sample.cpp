#include<bits/stdc++.h>
using namespace std;
int main(){
    int n=2;
    int arr[n][n];
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>arr[i][j];
        }
    }
    int delt=(arr[0][0]*arr[1][1])-(arr[0][1]*arr[1][0]);
    cout<<"the determinant is: "<<delt<<endl;
    return 0;
}
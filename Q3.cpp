#include<iostream>
#include<climits>
using namespace std;
int main(){
    int m;
    cout<<"Enter the no of rows: ";
    cin>>m;
    int n;
    cout<<"Enter the no of columns";
    cin>>n;
    int arr[m][n];
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cin>>arr[i][j];
        }
    }
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    int l1,r1,l2,r2;
    cout<<"enter the value of coordinates: ";
    cin>>l1>>r1>>l2>>r2;
    int sum=0;
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            sum=arr[l1][r1]+arr[l2][r2];
        }
    }
    cout<<sum;
}
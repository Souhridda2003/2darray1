#include<iostream>
#include<climits>
using namespace std;
int main(){
    int m;
    cout<<"Enter the no of rows: ";
    cin>>m;
    int n;
    cout<<"Enter the no of columns: ";
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
    int max=INT_MIN;
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            if(arr[i][j]>max) max=arr[i][j];
        }
    }
    cout<<"the larget element in an array "<<max;
}

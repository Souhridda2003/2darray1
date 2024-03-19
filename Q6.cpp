#include<iostream>
#include<climits>
using namespace std;
int main(){
    int m;
    cout<<"Enter the no of rows ans columns: ";
    cin>>m;
    int arr[m][m];
    for(int i=0;i<m;i++){
        for(int j=0;j<m;j++){
            cin>>arr[i][j];
        }
    }
    for(int i=0;i<m;i++){
        for(int j=0;j<m;j++){
            if(i==m/2 || j==m/2) cout<<arr[i][j]<<" ";
            else cout<<" "<<" ";
        }
        cout<<endl;
    }
    
}
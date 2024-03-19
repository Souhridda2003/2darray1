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
    int maxsum=INT_MIN;
    int maxRow=-1;
    for(int i=0;i<m;i++){
        int sum=0;
        for(int j=0;j<n;j++){
            sum=sum+arr[i][j];
        }
        if(sum>maxsum){
            maxsum=sum;
            maxRow=i;
        }
    }
    cout<<maxsum<<" "<<maxRow;
}
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;


int findsqrt(int n){
    int s =0;
    int e=n;
    int target=n;
    int ans =-1;
    while(s<e){
        int m=s+(e-s)/2;
        if(m*m == target){
            return m;
        }
        else if (m*m < target){
            s=m+1;
            ans =m;
        }else{
            e=m;
        }
    }
    return ans;
}

bool searchInMatrix(int arr[][4],int col,int row, int target){
    int s =0 ;
    int e = row*col-1;


    while(s<=e){
        int m = s+(e-s)/2;
        int r= m/col;
        int c= m%col;
        
        if(arr[r][c]==target){
            cout<<"found at index: "<<m<<endl;
            return true;
        }
        else if(arr[r][c]>target){
            e= m-1;
        }
        else{
            s=m+1;
        }
    }
    return false;

}

int main(){
    // int n;
    // cout<<"Please enter a number: ";
    // cin>>n;
    // int precision;
    // cout<<"please enter the precision: ";
    // cin>>precision;


// *****************  Sqrt using binary search ****************

    // int ans =findsqrt(n);
    // double finalAns = ans;
    // double step =0.1;
    // for (int i=0;i<precision;i++){
    //     for(double j = finalAns;j*j<n;j=j+step){
    //         finalAns = j;
    //     }
    //     step = step/10;
    // }
    // cout<<finalAns<<endl;

// Binary search in @D matrix
    int arr[5][4]={
        {1,2,3,4},
        {5,6,7,8},  
        {9,10,11,12},
        {13,14,15,16},
        {17,18,19,20}
    };
    int row =5;
    int col= 4;

    int target = 19;
    bool ans = searchInMatrix(arr,row, col,target);

    cout<<ans<<endl;

}
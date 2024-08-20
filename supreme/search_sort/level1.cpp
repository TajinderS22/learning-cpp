#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int binarySearch(int arr[] , int size, int target){
    int start =0;
    int end = size-1;


    while(start<=end){
        int mid = start+(end -start)/2;
        int  element = arr[mid];

        if (element == target){
            return mid;
        }
        else if (element < target){
            start =mid+1;
        }
        else {
            end= mid-1;
        }
    }
    return -1;
}

int firstOccurence(vector<int> a, int target) {
    int start =0;
    int end = a.size()-1;
    int mid = start +(end-start)/2;
    int index =-1 ;
    
    while(start<=end){
        if (a[mid]==target){
            index=mid;
            end=mid-1;
        }else if(a[mid]<target){
            start =mid+1;
        }else{
            end = mid-1;
        }
        mid = start+(end-start)/2;
    
    }
    return index;
}

int findMissing(vector<int> v){
    int start=0;
    int end = v.size()-1;
    int mid = start+(end-start)/2;
    int missing= -1;
    while(start<end){
        if (v[mid]==mid+1){
            start = mid+1;
        }else{
            missing =mid +1;
            end= mid;
        }
        mid = start+(end-start)/2;
    }
    return missing;
}

int main(){
    vector <int> arr {2,3,4,5,6,7,8,9,10,11,12,13,14,15};
    int size= arr.size();
    int target =2;

    // ************** binary search implementation **************

    // int indexOfTarget = binarySearch(arr,size,target);

    // if (indexOfTarget == -1){
    //     cout<<"element not found in the given array "<<endl;

    // }else{
    //     cout<<"target is found at index "<<indexOfTarget<<endl;
    // }

    // ***************Binart searchin STL ****************


    // sort(arr.begin(),arr.end());
    // if(binary_search(arr.begin(),arr.end(),target)){
    //     cout<<"element found in the array"<<endl;
    // }else{
    //     cout<<"Element not found in the given array"<<endl;
    // }
//  ************** for each Loop ***************
    // for ( auto e : arr){
    //     cout<<e<<" ";
    // }



// ************* First occurence in the array ************ 
    // int indexOfFirstOccurence = firstOccurence(arr,target);
    // cout<<indexOfFirstOccurence<<endl;
    // if (indexOfFirstOccurence == -1){
    //     cout<<"Element is  not found in array"<<endl;
    // }else{
    //     cout<<"Element is first found at index "<<indexOfFirstOccurence<<" ."<<endl;
    // }

// *********************find missing using binary search***********
    int missing = findMissing(arr);
    cout<< missing <<endl;


}

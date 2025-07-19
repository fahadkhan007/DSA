#include<bits/stdc++.h>
using namespace std;
// there will be two function one for merge and one for merge sort\

void merge(vector<int>&arr,int low,int mid,int high){
    vector<int>temp;
    int left=low;
    int right=mid+1;
    while (left<=mid && right<=high)
    {
        if(arr[left]<arr[right]){
            temp.push_back(arr[left]);
            left++;
        }else{
            temp.push_back(arr[right]);
            right++;
        }
    }
    while (left<=mid)
    {
        temp.push_back(arr[left]);
        left++;
    }
    while (right<=high)
    {
        temp.push_back(arr[right]);
        right++;
    }
    for(int i=0;i<temp.size();i++){
        arr[low+i]=temp[i];
    }
}

void merge_sort(vector<int>&arr,int low,int high){
    if(low>=high){
        return;
    }
    int mid = low + (high-low)/2;
    merge_sort(arr,low,mid);
    merge_sort(arr,mid+1,high);
    merge(arr,low,mid,high);
}

int main(){
    vector<int>arr;
    int n;
    cout<<"number of element : ";
    cin>>n;
    int x=0;
    for(int i=0;i<n;i++){
        cout<<"enter the element of the array : ";
        cin>>x;
        arr.push_back(x);
    }
    merge_sort(arr,0,n-1);
    for(int i:arr){
        cout<<i<<" ";
    }


    return 0;
}
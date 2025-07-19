#include<iostream>
#include<algorithm>
using namespace std;

int main(){
    int n;
    cout<<"enter the size of the array: ";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cout<<"enter the "<<i<<"th element: ";
        cin>>arr[i];
    }
    sort(arr,arr+n);
    int found=-1;
    int start=0;
    int end=n-1;
    cout<<"enter the element you wanna find in this array: ";
    int key;
    cin>>key;
    while (start<=end){
        int mid=(start+end)/2;
        if (key==arr[mid])
        {
            found=mid;
            break;
        }
        if(key>arr[mid]){
            start=mid+1;
        }
        if(key<arr[mid]){
            end=mid-1;
        }
        
    }
    if(found==-1){
        cout<<"sorry element not found.";
    }else{
        cout<<"element found on "<<found<<"th place.";
    }
    return 0;

}
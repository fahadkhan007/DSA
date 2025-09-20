#include<iostream>
#include<vector>
using namespace std;
void reverse(vector<int>&arr,int left,int right){
    if(left>right) return;
    swap(arr[left],arr[right]);
    reverse(arr,left+1,right-1);

}
int main(){
    int n;
    cin>>n;
    vector<int>arr(n);
    for(int i=0;i<n;i++) cin>>arr[i];
    reverse(arr,0,n-1);
    for(int i=0;i<n;i++) cout<<arr[i]<<" ";
    return 0;
}
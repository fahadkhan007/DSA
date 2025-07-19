#include<iostream>
using namespace std;
int main(){
    int n;
    cout << "enter the number of elements: ";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cout << "enter the " << i << "th element: ";
        cin >> arr[i];
    }
    //logic of the selection sort
    for(int i=0;i<n-2;i++){
        int min=i;
        for(int j=i+1;j<n-1;j++){
            if(arr[j]<arr[min]){
                min=j;
            }
        }
        swap(arr[i],arr[min]);
    }

    for(int i:arr){
        cout<<i<<" ";
    }
}
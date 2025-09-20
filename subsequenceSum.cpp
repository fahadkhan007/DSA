// write a programm to print all the subseuence of an array whose sum is k
#include<bits/stdc++.h>
using namespace std;
void sprint(int arr[],vector<int>&ds,int ind,int s,int sum,int n){
    if(ind==n){
        if(s==sum){
            for(auto it : ds){
                cout<<it<<" ";
            }
            cout<<endl;
        }
        return;
    }

    // to pick a number for the subsequence
    ds.push_back(arr[ind]);
    s+=arr[ind];
    sprint(arr,ds,ind+1,s,sum,n);
    
    // to  not pick a number for sub...
    s-=arr[ind];
    ds.pop_back();
    sprint(arr,ds,ind+1,s,sum,n);

}

int main(){
    int n;
    cout<<"enter the number of element to insert: ";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"enter the total sum(value of k): ";
    int k;
    cin>>k;
    vector<int>ds;
    int s=0;
    int ind=0;
    sprint(arr,ds,ind,s,k,n);
    return 0;
}



#include<iostream>
using namespace std;

void btrack(int n){
    if(n<1){
        return;
    }
    btrack(n-1);
    cout<<n<<" ";
}

int main(){
    int n;
    cin>>n;
    btrack(n);

}
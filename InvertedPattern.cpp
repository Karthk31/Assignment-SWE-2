#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    int count=1;
    for (int i = n; i >= 1; i--){
        for (int j = 1; j <= i; j++){
            cout<<count<<"\t";
            count++;
        }
        cout<<"\n";
        count=1;
    }
    
    return 0;
}
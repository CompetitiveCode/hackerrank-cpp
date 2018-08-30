//Answer to For Loop

#include <iostream>
#include <cstdio>
using namespace std;

int main() {
    int b,c;
    string a[10]={"one","two","three","four","five","six","seven","eight","nine"};
    cin>>b>>c;
    for(int i=b;i<=c;i++){
        if(i<10){
            cout<<a[i-1]<<"\n";
        }
        else if(i%2==0){
            cout<<"even\n";
        }
        else{
            cout<<"odd\n";
        }
    }
    return 0;
}

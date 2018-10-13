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

/*
A for loop is a programming language statement which allows code to be repeatedly executed.

The syntax for this is

for ( <expression_1> ; <expression_2> ; <expression_3> )
    <statement>
expression_1 is used for intializing variables which are generally used for controlling terminating flag for the loop.
expression_2 is used to check for the terminating condition. If this evaluates to false, then the loop is terminated.
expression_3 is generally used to update the flags/variables.
A sample loop will be

for(int i = 0; i < 10; i++) {
    ...
}
*/
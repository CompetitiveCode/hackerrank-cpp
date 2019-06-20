//Answer to Strings

#include <iostream>
#include <string>
using namespace std;

int main() {
    string a,b;
    cin>>a;
    cin>>b;
    cout<<a.size()<<" "<<b.size()<<"\n";
    cout<<a+b<<"\n";
    char c=a[0],d=b[0];
    a[0]=d;
    b[0]=c;
    cout<<a<<" "<<b;
    return 0;
}

/*

Declaration:

string a = "abc";
Size:

int len = a.size();
Concatenate two strings:

string a = "abc";
string b = "def";
string c = a + b; // c = "abcdef".
Accessing  element:

string s = "abc";
char   c0 = s[0];   // c0 = 'a'
char   c1 = s[1];   // c1 = 'b'
char   c2 = s[2];   // c2 = 'c'

s[0] = 'z';         // s = "zbc"
P.S.: We will use cin/cout to read/write a string.

*/
//Answer to Input and Output

#include <iostream>
using namespace std;

int main() {
    int a,b,c;
    cin>>a>>b>>c;
    a+=b+c;
    cout<<a;
    return 0;
}

/*
In C++, you can read a single whitespace-separated token of input using cin, and print output to stdout using cout. For example, let's say we declare the following variables:

string s;
int n;
and we want to use cin to read the input "High 5" from stdin. We can do this with the following code:

cin >> s >> n;
The above code reads the first word ("High") from stdin and saves it as string s, then reads the second word ("5") from stdin and saves it as integer n. If we want to print these values to stdout, we write the following code:

cout << s << " " << n << endl;
The above code prints the contents of string s, which is the word "High". Then it prints a single space (" "), followed by the contents of integer n. Because we also want to ensure that nothing else is printed on this line, we end our line of output with a newline via endl. This results in the following output:

High 5

*/
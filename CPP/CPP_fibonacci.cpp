#include<iostream>
using namespace std;

void fib(int n);

int main() {
    int i, no;
    cout<<"Enter nubmer of terms for Series: ";
    //cin>>no;
    no = 4;
    cout<<"Fibonacci series are: \n";
    fib(no);
    return 0;
}
void fib(int n) {
    int first = 0, second = 1, temp;
    first=0;
    second=1;
    for(int i = 0; i < n; i++) {
        cout<<"\n"<<first;
        temp = second;
        second = first + second;
        first = temp;
    }
}


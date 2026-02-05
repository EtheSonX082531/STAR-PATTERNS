#include<iostream>
using namespace std;

long long factorial(int x) {
    long long fact=1;
    for(int i=2; i<=x; i++) {
        fact=fact*i;
    }
    return fact;
}

int combination(int i,int j) {
    return factorial(i)/(factorial(j)*factorial(i-j));
}

void pascalTriangle(int n) {
    int x=n;
    for(int i=0; i<=n; i++) {
        for(int k=0; k<x; k++) {
            cout<<" ";
        }
        x=x-1;
        for(int j=0; j<=i; j++) {
            cout<<combination(i,j)<<" ";
        }
        cout<<endl;
    }
}

int main()
{
    int n;
    cout<<"Enter The Pascal Triangle Line Number:";
    cin>>n;
    pascalTriangle(n-1);
    return 0;
}

#include<iostream>
using namespace std;

int main()
{
    cout << "Enter number of lines:" << endl;
    int n;
    cin>>n;
    char ch;
    for(int i=0; i<n; i++) {
        ch='A';
        for(int j=0; j<n; j++) {
            cout<<ch<<" ";
            ch+=1;
        }
        cout<<endl;
    }
    return 0;
}

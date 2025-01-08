#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter line number:"<<endl;
    cin>>n;
    for(int i=1; i<=n; i++) {
        if(i==1 || i==n) {
            for(int j=0; j<n; j++) {
                cout<<"* ";
            }
            cout<<endl;
        }
        else {
            for(int k=1; k<=n; k++) {
                if(k==1 || k==n) {
                    cout<<"* ";
                }
                else {
                    cout<<"  ";
                }
            }
            cout<<endl;
        }
    }
    return 0;
}

#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    for(int i=0; i<n; i++) {
        if(i%2==0) {
            for(int j=0; j<n; j++) {
                cout<<"* ";
            }
        }
        else {
            for(int k=0; k<n; k++) {
                if(k==0 || k==n-1) {
                    cout<<"* ";
                }
                else if(k%2==0) {
                    cout<<"* ";
                }
                else {
                    cout<<"  ";
                }
            }
        }
        cout<<endl;
    }
    return 0;
}

#include<iostream>
using namespace std;

void PrintStar(int n,int m,int o) {
    if(m==n) {
        cout<<endl;
        o=o+1;
        m=-1;
        if(o==n) {
            return ;
        }
        PrintStar(n,m+1,o);
        return;
    }
    cout<<"* ";
    PrintStar(n,m+1,o);
    return;
}

int main()
{
    cout << "Enter line number:" << endl;
    int n;
    cin>>n;
    PrintStar(n,0,0);
    return 0;
}

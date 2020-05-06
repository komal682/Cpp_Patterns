#include<iostream>
using namespace std;
int main()
{
    int a,i,j,b;
    cout<<"\t\t\t\t input:";
    cin>>a;
    for(i=1;i<=a;i++)
    {
        j=i;
        while(j!=a+1)
        {
            cout<<j;
            j++;
        }
        b=a-1;
        for(j=b;j>=i;j--)
        {
            cout<<j;
        }
        cout<<"\n";
    }

    return 0;
}

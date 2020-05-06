#include<iostream>
using namespace std;
int main()
{
    int a,b,i,j,c;
    cout<<"\t\t\t\t input:";
    cin>>a;
    for(i=0;i<a;i++)
    {
        for(b=0;b<i;b++)
        {
            cout<<" ";
        }
        c=i+1;
        for(j=0;j<a-i;j++)
        {
            cout<<c<<" ";
            c++;
        }
        cout<<"\n";
    }
    for(i=1;i<a;i++)
    {
        for(b=a-1;b>i;b--)
        {
            cout<<" ";
        }
        c=a-i;
        for(j=0;j<=i;j++)
        {
            cout<<c<<" ";
            c++;
        }

        cout<<"\n";
    }
    return 0;
}

#include<iostream>
using namespace std;
int main()
{
    int a,b,i,j,k=1,l=1;
    cout<<"\t\t\t\t\t input:";
    cin>>a;
    for(i=1;i<=a;i++)
    {
        for(b=i;b<a;b++)
        {
            cout<<" ";
        }
        if(i%2!=0)
        {
            for(j=1;j<=(2*k-1);j++)
            {
                cout<<"* ";
            }
            k++;
        }
        else
        {
            for(j=1;j<=(2*l);j++)
            {
                cout<<j<<" ";
            }
            l++;

        }
        cout<<"\n";
    }
    return 0;
}

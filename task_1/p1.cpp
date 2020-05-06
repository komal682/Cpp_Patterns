#include<iostream>
using namespace std;
int main()
{
    int a,i,j;
    char r,s;
    cout<<"\t\t\t\t input:";
    cin >> a;
    r='A';
    s='Z';
    for(i=1;i<=a;i++)
    {
        for(j=0;j<=(a-((a+i+1)/2));j++)
        {
            if(i%2!=0)
            {
                cout << r << " ";
                r++;
            }
            else
            {
                cout << " " << s;
                s--;
            }
        }
        cout <<"\n";
    }
     r='A';
     s='Z';
    for(i=1;i<a;i++)
    {
        for(j=0;j<=(i/2);j++)
        {
            if(i%2!=0)
            {
                cout << " " << s;
                s--;
            }
            else
            {
                cout << r << " ";
                r++;
            }

        }
        cout <<"\n";
    }
    return 0;
}

#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int r,c,i,j,count=0,sum=0,f=0,t=0,v=0,b[100],k=0;
    char a[100][100];
    cin>>r>>c;
    for(i=0; i<r; i++)
    {
        for(j=0; j<c; j++)
            cin>>a[i][j];
    }
    for(i=0; i<r; i++)
    {
        count=0;
        for(j=0; j<c; j++)
        {
            if(a[i][j]=='S')
            {
                count++;


            }
        }
        if(count==0)
        {
            f++;
            sum+=c;
         ///   cout<<"r: "<<sum<<endl;
        }
    }

     for(i=0; i<c; i++)
    {
        count=0;
        for(j=0; j<r; j++)
        {
            if(a[j][i]=='S')
            {
                count++;
            }
        }
        if(count==0)
        {
            v++;
            sum+=r;
        }
          ///  cout<<"c: "<<sum<<endl;

    }
    sum-=f*v;
    cout<<sum;
   //// cout<<sum;

}

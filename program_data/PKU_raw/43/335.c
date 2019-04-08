
int p( int n)
{int i;
if(n==3)
return 1;
else
{    for(i=2;i<n;i++)
    {if(n%i==0)
{return 0;

    }
    if(i==n-1)
    {return 1;}                    
                    }}
                    }
int main()
{int m,j;
cin>>m;
for(j=3;j<=(m/2);j++)
{if(p(j)==1)
{if(p(m-j)==1)
cout<<j<<" "<<m-j<<endl;
         }        
         }
    return 0;
    }   
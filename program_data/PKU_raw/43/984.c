
int d(int x);
int main()
{int n,r[100],t[100];
cin>>n;int w=1;
for(int i=3;i<n/2+1;i++)
{ if(d(i)==1&&d(n-i)==1)
{r[w]=i;t[w]=n-i;cout<<r[w]<<' '<<t[w]<<endl;w++;}

}

}
int d(int x)
{int m,c=1,q;
    for(int i=2;i<x;i++)
    { m=x%i;c++;
if(m==0)
{c=0;break;}

    }
    if(c!=0) q=1;
    else q=0;return q;
}
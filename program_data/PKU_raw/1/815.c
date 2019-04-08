int i=0;
int f(int n,int m)
{int k=0;
if(m==1)
i++;
else
{for(k=n;k<=m;k++)
   {if(m%k==0)
    {n=k;
     f(n,m/n);}}}
return(i);}
int main()
{
 int n,b,c;
 cin>>n;
 int a;
 for(b=0;b<n;b++)
   {cin>>a;
    c=f(2,a);
    cout<<c<<endl;
    i=0;}
 return 0;
}



int fibbnacci(int x)
{
int a,b,c;
a=b=1;
if(x==1 || x==2) return a;
for(int i=3;i<=x;i++)
{c=b;b=a+b;a=c;
}
return b;
}
int main()
{
int a[15];
int n;cin>>n;
for(int i=0;i<n;i++)
{cin>>a[i];}

for(int j=0;j<n;j++)
{
cout<<fibbnacci(a[j])<<endl;}
return 0;
}


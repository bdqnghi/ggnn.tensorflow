int f(int a)
{
if(a==1||a==2)
return 1;
else
return (f(a-1)+f(a-2));
}
int main()
{
int a[100];
int n,i,j;
cin>>n;
if(n<=100)
{
for(i=0;i<n;i++)
cin>>a[i];
for(i=0;i<n;i++)
if(a[i]>=1&&a[i]<=20)
cout<<f(a[i])<<endl;
}
return 0;
}
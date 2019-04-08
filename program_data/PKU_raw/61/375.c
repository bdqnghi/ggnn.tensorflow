int main()
{
int a[101],i,j,k;
a[1]=1;
a[2]=1;
for(i=3;i<=100;i++)
{
a[i]=a[i-1]+a[i-2];
}
int n;
cin>>n;
for(j=1;j<=n;j++)
{
cin>>k;
cout<<a[k]<<endl;
}
return 0;
}
int main()
{
int n,i,j,m=0;
int a[20001],b[20001];
cin>>n;
for(i=1;i<=n;i++)
{
cin>>a[i];
}
for(i=1;i<=n;i++)
{
for(j=1;j<=i-1;j++)
{
if(a[i]==a[j])
break;
}
if(i==j)
{
m=m+1;
b[m]=a[i];
}
}
for(i=1;i<=m-1;i++)
{
cout<<b[i]<<" ";
}
cout<<b[m]<<endl;
return 0;
}
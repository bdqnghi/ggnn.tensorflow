int main()
{
int n,i;
cin>>n;
for(i=0;i<n;i++)
{
int p,q,i,j;
cin>>p>>q;
int a[p][q],sum=0;
for(i=0;i<p;i++)
{
for(j=0;j<q;j++)
{
cin>>a[i][j];
}
}
for(i=0;i<q;i++)
{
sum=sum+a[0][i]+a[p-1][i];
}
for(j=0;j<p;j++)
{
sum=sum+a[j][0]+a[j][q-1];
}
sum=sum-a[0][0]-a[0][q-1]-a[p-1][0]-a[p-1][q-1];
cout<<sum<<endl;
}
return 0;
}
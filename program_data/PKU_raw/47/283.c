int main()
{int n,a[100],b[100],i,j;
cin>>n;
for(i=0;i<n;i=i+1)
{cin>>a[i];
b[n-1-i]=a[i];}
for(j=0;j<n;j=j+1)
{if(j==0) cout<<b[j];
else cout<<' '<<b[j];}

return 0;
}
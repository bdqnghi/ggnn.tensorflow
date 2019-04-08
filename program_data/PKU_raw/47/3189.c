int main()
{
int n;
cin>>n;
int a[n],b[n];
for(int i=0;i<n;i++)
{cin>>a[i];}
for(int j=0;j<n;j++)
{
	b[j]=a[n-j-1];
}
cout<<b[0];
for(int k=1;k<n;k++)
{cout<<" "<<b[k];}
	return 0;
}
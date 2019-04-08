int a[100000];
int n;
void del_a(int x)
{
	for(int i=x;i<n-1;i++)
	{
		a[i]=a[i+1];
	}
	a[n-1]=0;
	n=n-1;

}
int main()
{
cin>>n;
for(int i=0;i<n;i++)
{
cin>>a[i];

}
int t ;
cin>>t;
for(int i=0;i<n;i++)
{
if(a[i]==t)
{
del_a(i);
i=i-1;
}
}
for(int i=0;i<n-1;i++)
{
cout<<a[i]<<" ";
}
cout<<a[n-1];
return 0;
}
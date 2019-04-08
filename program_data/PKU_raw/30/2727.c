int work(int n)
{
	int i,j,k=n;
	if(n%7==0)return 0;
	while(n>=1)
	{
		if(n%10==7)return 0;
		n/=10;
	}
	return k*k;
}
int main()
{
int a[101];
int i,j,sum=0,n;
cin>>n;
for(i=1;i<=n;i++)
sum+=work(i);
cout<<sum;
	return 0;
}
	
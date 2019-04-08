int main()
{
	char a[1000][45];//??????
	int sum=0,n,i;//sum??????????
	cin>>n;
	for(i=1;i<=n;i++) cin>>a[i];//????
	for(i=1;i<=n;i++)
	{
		if(sum==0)
		{
			sum=strlen(a[i]);
		}
		else if(strlen(a[i])+1+sum<=80) 
		{
			cout<<" ";
			sum=sum+1+strlen(a[i]);
		}
		else if(strlen(a[i])+1+sum>80)
		{
			cout<<endl;
			sum=strlen(a[i]);
		}
		cout<<a[i];
	}
	return 0;
}
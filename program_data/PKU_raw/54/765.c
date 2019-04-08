int main()
{
	int m=0,n=0,k=0,i=0;
	cin>>n>>k;
	int monkey[100];
	memset(monkey,1,sizeof(monkey));
	monkey[n]=k;
	do
	{
		monkey[n]=monkey[n]+n;
		for(i=n-1;i>=1;i--)
		{
			if(monkey[i+1]%(n-1)!=0)
			    break;
			else
			    monkey[i]=monkey[i+1]/(n-1)*n+k;
		}
	}
	while(i>=1);
	cout<<monkey[1]<<endl;
	return 0;
}
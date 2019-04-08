int main()
{
	int n,cnt=0;
	cin>>n;
	int num[100]={0};
	num[0]=1;
	for(int j=0;j<n;j++)
	{
	
	for(int i=0;i<100;i++)
	{
		num[i]=num[i]*2;
	}
	for(int i=0;i<100;i++)
	{
		if(num[i]>=10)
		{
			num[i+1]+=num[i]/10;
			num[i]=num[i]%10;
		}
	}
	}
	int k=99;
	while(num[k]==0) k--;
	for(int i=k;i>=0;i--)
		cout<<num[i];
			
	
	return 0;
}

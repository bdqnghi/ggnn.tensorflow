int main()
{
	int n=0,a0=1,a1=1,a3=0,i=0,num[10],j=0;
	cin>>n;
	for(i=0;i<n;i++)
	{
		a1=1;
		a0=1;
		cin>>num[i];
		if(num[i]>2)
		{
			for(j=0;j<(num[i]-2);j++)
			{
					a3=a0+a1;
					a0=a1;
					a1=a3;
			}
			cout<<a1<<endl;
		}
		if(num[i]==1||num[i]==2)
			cout<<a1<<endl;
	}
	return 0;
} 
int main()
{
	int n,a[100][60],i,t;
	cin>>n;
	for(i=1;i<=n;i++)
	{
		int sum=0;
		cin>>a[i][1];
		if(a[i][1]==0) cout<<60<<endl;
		else
		{
		for(t=1;t<=a[i][1];t++)
		{
			cin>>a[i][t+1];
		}
        for(t=1;t<=a[i][1];t++)
		{
			if(a[i][t+1]+(t-1)*3<=60&&a[i][t+1]+t*3>=60) sum=a[i][t+1];
			else if(a[i][t+1]+t*3<=60) sum=60-t*3;
		}
		cout<<sum<<endl;
				
		}
	}

		return 0;
}
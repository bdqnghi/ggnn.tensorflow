int main()
{
	int x[1000]={0},y[1000]={0};
	cin>>x[0]>>y[0];
	for(int i=0;x[i]!=1;i++)
	{
		if(x[i]%2==1)
			x[i+1]=(x[i]-1)/2;
		else
			x[i+1]=x[i]/2;
	}
	for(int i=0;y[i]!=1;i++)
	{
		if(y[i]%2==1)
			y[i+1]=(y[i]-1)/2;
		else
			y[i+1]=y[i]/2;
	}
	for(int i=0;i<1000;i++)
	{
		for(int j=0;j<1000;j++)
		{
			if(x[i]==y[j])
			{
				cout<<x[i]<<endl;
				j=1000;
				i=1000;
			}
		}
	}
	return 0;
}
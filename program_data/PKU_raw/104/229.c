int main()
{
	int a[11]={0},b[11]={0},i=0,j=0,t=0;
	cin>>a[0]>>b[0];
	for(i=1;i<11;i++)
	{
		if(a[i-1]%2==0)
			a[i]=a[i-1]/2;
		else
			a[i]=(a[i-1]-1)/2;
	}
	for(i=1;i<11;i++)
	{
		if(b[i-1]%2==0)
			b[i]=b[i-1]/2;
		else
			b[i]=(b[i-1]-1)/2;
	}
	for(i=0;i<11;i++)
	{
		for(j=0;j<11;j++)
		{
			if(a[i]==b[j])
			{
				cout<<a[i]<<endl;
				t=1;
			    break;
			}
		}
		if(t==1)
			break;
	}
	return 0;
}
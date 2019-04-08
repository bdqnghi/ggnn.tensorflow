int main()
{
	int n,a[300],add=0;
	int temp1=0,k=0;
	double ave,c[300],b[300],temp=0;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
		add=add+a[i];
	}
	ave=(double)add/(double)n;
	for(int j=0;j<n-1;j++)
		for(int i=0;i<n-j-1;i++)
		{
			if(a[i]>a[i+1])
			{
				temp1=a[i];
				a[i]=a[i+1];
				a[i+1]=temp1;
			}
		}
	for(int i=0;i<n;i++)
	{
		b[i]=fabs((double)a[i]-ave);//b[i]????????????
		if(b[i]>temp)
			temp=b[i];//?temp??????
	}	
	for(int i=0;i<n;i++)
	{
		if(b[i]==temp)
		{
			c[k]=a[i];
			k++;
		}
	}
	cout<<c[0];
	if(k>=1)
	{
		for(int q=1;q<k;q++)
			cout<<','<<c[q];
	}
	return 0;
}
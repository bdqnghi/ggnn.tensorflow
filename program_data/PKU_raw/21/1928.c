int main()
{
	int n; cin>>n;
	int a[n],c[n];
	int i,j,k=0,t=0,sum=0,temp;
	for (i=0;i<n;i++)
		{
		cin>>a[i];
		sum=sum+a[i];
		}
	double aver=(sum+0.1)/n-0.1/n; double b[n];
	double max=0;
	for (i=0;i<n;i++)
		{
		b[i]=a[i]-aver;
		b[i]=(b[i]>0 ? b[i]: -b[i]);
		if (b[i]>max) max=b[i];
		}
	for (j=0;j<n;j++)
		if (b[j]==max)
		{
			c[k++]=a[j]; t=t+1;
		}
	if (t==1) cout<<c[0]<<endl;
	else
	{
		for (k=1;k<t;k++)
			for (j=0;j<t-1;j++)
				if (c[j]>c[j+1])
				{temp=c[j+1]; c[j+1]=c[j]; c[j]=temp;}
		for (k=0;k<t-1;k++)
			cout<<c[k]<<',';
		cout<<c[k]<<endl;
	}
	return 0;
}

int main()
{
	int n,i,j;
	double sum=0,ave=0;
	double a[300];
	cin>>n;
	for(i=0;i<n;i++)
	{
		cin>>a[i];
		sum=sum+a[i];
	}
	ave=sum/n;
	double dis[300];
	for(i=0;i<n;i++)
	{
		dis[i]=fabs(a[i]-ave);
	}
	double max=0;
	for(i=0;i<n;i++)
	{
		if(dis[i]>max)
			max=dis[i];
	}
	double b[300]={0};
	int k=0,temp=0;
	for(i=0;i<n;i++)
	{
		if(fabs(dis[i]-max)<0.01)
		{
			b[k]=a[i];
			k++;
		}
	}
	if(k==1){cout<<b[0];}
	else{
	for(i=0;i<k;i++)
	{
		for(j=i+1;j<k;j++)
		{
			if(b[i]>b[j])
			{
				temp=b[i];
				b[i]=b[j];
				b[j]=temp;
			}
		}
	}
	cout<<b[0];
	for(i=1;i<k;i++)
		cout<<","<<b[i];}
	return 0;
}


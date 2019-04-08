int main()
{
	int a[300],b[300]={1};
	int n,i,j,count=0;
	double total=0.0,result=0.0;
	cin>>n;
	for(i=0;i<n;i++)
	{
		cin>>a[i];
		total+=a[i];
	}
	result=total/n;
	double max=0.0;
	for(i=0;i<n;i++)
	{
		if((double)fabs((a[i]-result))-max>0.00001)
			max=fabs(a[i]-result);
	}
	for(i=0,j=0;i<n;i++)
	{
		if(fabs(fabs(a[i]-result)-max)<0.00001)
		{
			b[j]=a[i];
			count++;
			j++;
		}
	}
	int t;
	for(i=0;i<count-1;i++)
		for(j=i;j<count-1;j++)
		{
			if(b[j]>b[j+1])
			{
				t=b[j];
				b[j]=b[j+1];
				b[j+1]=t;
			}
		}
	cout<<b[0];
	for(i=1;i<count;i++)
		cout<<","<<b[i];
	return 0;
}
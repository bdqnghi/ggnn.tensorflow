int main()
{
	double a[320]={0};
	double sum=0;
	int num=0;
	int i,j;
	double average=0;
	double b[320]={0},t;
	double c[400]={0};
	double max=0;
	double n;
	cin>>n;
	for(i=0;i<n;i++)
	{
		cin>>a[i];
		sum=sum+a[i];
	}
	//cout<<sum;
	average=sum/n;
	//cout<<average;
	for(i=0;i<n;i++)
	{
		b[i]=fabs(a[i]-average);
		//cout<<"b"<<i<<b[i]<<" ";
		if(max<b[i])
			max=b[i];
	}
	//cout<<"max "<<max;
	for(i=0;i<n;i++)
	{
		if(b[i]==max)
		{
			c[num]=a[i];
			num++;
		}
	}
	//cout<<"check "<<c[0]<<" "<<c[1]<<endl;
	for(i=0;i<num-1;i++)
		for(j=0;j<num-i-1;j++)
		{
			if(c[j]>c[j+1])
			{
				t=c[j];
				c[j]=c[j+1];
				c[j+1]=t;
			}
		}
	cout<<c[0];
	for(i=1;i<num;i++)
		cout<<","<<c[i];
	return 0;
}
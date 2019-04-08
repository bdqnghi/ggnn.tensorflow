int main()
{
	int n,i,j,num1,num2;
	double sum=0;
	unsigned a[300],temp;
	cin>>n;
	for(i=0;i<=n-1;i++)
		cin>>a[i];
	for(i=0;i<n;i++)
		sum=sum+a[i];
	sum=sum/n;
	for(i=1;i<n;i++)
		for(j=0;j<n-i;j++)
			if(a[j]>a[j+1])
			{
				temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
			}
	num1=0;
	i=0;
	while(a[i]==a[0])
	{
		num1++;
		i++;
	}
	num2=0;
	i=n-1;
	while(a[i]==a[n-1])
	{
		num2++;
		i--;
	}
	if(2*sum-a[0]-a[n-1]<0.000001&&a[0]+a[n-1]-2*sum<0.000001)
	{
		for(i=0;i<num1;i++)
			cout<<a[0]<<",";
		for(i=0;i<num2-1;i++)
			cout<<a[n-1]<<",";
		cout<<a[n-1];
	}
	else if(2*sum-a[0]-a[n-1]>=0.000001)
	{
		for(i=0;i<num1-1;i++)
			cout<<a[0]<<",";
	cout<<a[0];
	}
	else
	{
		for(i=0;i<num2-1;i++)
		
			cout<<a[n-1]<<",";
			cout<<a[n-1];
	}
	return 0;
	
}
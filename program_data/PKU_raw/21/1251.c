int main()
{
	int n,a[300],t;
	double sum=0,average;
	cin>>n;
	for (int i=0;i<n;i++)
	{
		cin>>a[i];
		sum+=a[i];
	}
	average=sum/n;
	for (int j=0;j<n-1;j++)
	{
		for (int k=n-1;k>j;k--)
		{
			if (a[k]<a[k-1])
			{
				t=a[k];a[k]=a[k-1];a[k-1]=t;
			}
		}
	}
	if (  (average-a[0])>(a[n-1]-average) )
		cout<<a[0]<<endl;
	else if (  (average-a[0])<(a[n-1]-average) )
		cout<<a[n-1]<<endl;
	else if (  (average-a[0])==(a[n-1]-average) )
		cout<<a[0]<<","<<a[n-1]<<endl;
	return 0;
}

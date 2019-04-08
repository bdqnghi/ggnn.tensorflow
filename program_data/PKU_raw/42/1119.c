int main()
{
	signed n=0,k=0,sum=0; signed a[100000]={0};int i=0,j=0;
	cin>>n;
	sum=n;
	for(i=0;i<n;i++)
		cin>>a[i];
	cin>>k;
	for(i=0;i<sum;i++)
	{
		if(a[i]==k)
		{
			for(j=i;j<sum;j++)
			{
				a[j]=a[j+1];
			}
			sum--;
			i--;
		}
	}
	for(i=0;i<sum;i++)
	{
		cout<<a[i];
		if(i==sum-1)
		{
			cout<<endl;
			break;
		}
		cout<<" ";
	}
	return 0;
}
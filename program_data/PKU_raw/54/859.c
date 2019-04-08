int main()
{
	int n,k,sum,i,j,t;
	cin>>n;
	cin>>k;
	for(j=1;j>0;j++)
	{
		sum=(n-1)*j;
		t=0;
		for(i=0;i<n;i++)
		{
			if(sum%(n-1)==0)
			{
				sum=sum/(n-1)*n+k;
				t=t+1;
			}
			else
			{
				break;
			}
		}
		if(t==n)
		{
			break;
		}
	}
	cout<<sum<<endl;
	return 0;
}
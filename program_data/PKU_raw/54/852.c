int fei(int);
int main()
{
	int n,k,flag=0,a=1,i,sum=0;
	cin>>n>>k;
	while(flag==0)
	{
		sum=n*a+k;
		for(i=2;i<=n;i++)
		{
			if(sum%(n-1)!=0)
				break;
			else
				sum=sum/(n-1)*n+k;
		}
		if(i==n+1)
		{
			cout<<sum<<endl;
			flag=1;
		}
		a++;
	}
	return 0;
}
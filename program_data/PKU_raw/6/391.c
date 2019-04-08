int main()
{
	int t,m,n,a[100][100],i,j,k,sum;
	int *p;
	cin>>t;                //??????
	for(k=1;k<=t;k++)      //??????
	{
		cin>>m>>n;
		sum=0;       //???sum?0
		for(i=0;i<=m-1;i++)
		{
			for(j=0;j<=n-1;j++)
			{
				cin>>a[i][j];
			}
		}              //????
		for(p=a[0];p<=a[0]+n-1;p++)
		{
			sum=sum+*p;
		}               //?????
		for(i=1;i<=m-2;i++)
		{
			sum=sum+a[i][0]+a[i][n-1];
		}              //????????????????
		for(p=a[m-1];p<=a[m-1]+n-1;p++)
		{
			sum=sum+*p;
		}              //??????
		cout<<sum<<endl;
	}
		return 0;
}


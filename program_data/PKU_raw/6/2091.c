int main()
{
	int number[100][100];
	int k,i,x,y;
	int m,n;
	cin>>k;
	for(i=0;i<k;i++)
	{
		int sum=0;
		cin>>m>>n;
		for(x=0;x<m;x++)
		{
			for(y=0;y<n;y++)
			{
				cin>>*(*(number+x)+y);
			}
		}
		if(n==1&&m==1)
			cout<<**number<<endl;
		else
		{
			for(x=0;x<m;x++)
			{
				sum+=*(*(number+x));
				sum+=*(*(number+x)+n-1);
			}
			//cout<<sum<<endl;

			for(y=0;y<n;y++)
			{
				sum+=*(*(number)+y);
				sum+=*(*(number+m-1)+y);
			}
			//cout<<sum<<endl;
			sum=sum-*(*(number))-*(*(number)+n-1)-*(*(number+m-1))-*(*(number+m-1)+n-1);
			cout<<sum<<endl;
		}
	}
	return 0;
}

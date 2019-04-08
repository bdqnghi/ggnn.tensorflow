int main()
{
	int n,m,i,j,k,time,sum;
	cin>>n;
	int x[n+1];
	for(i=1;i<=n;i++)
	{
		time=0,sum=0;
		cin>>m;
		int a[m+1];
		for(j=1;j<m+1;j++)
		{
			cin>>a[j];
		}
			for(j=1;j<m+1;j++)
		{
			time=a[j]+3*j;
			if(time<=63)
			{
				sum=a[j];
			}
			if(time>=60&&time<63)
			{break;
			}
			else if(time>63)
			{
				time=a[j-1]+3*(j-1);
				sum=a[j-1]+60-time;
				time=a[j]+3*j;
			    break;
			}
		}
	
		if(time<60)
		{
			sum=sum+60-time;
		}
		x[i]=sum; 
	}
	for(i=1;i<=n;i++)
	{
		cout<<x[i]<<endl;
	}
	return 0;
} 
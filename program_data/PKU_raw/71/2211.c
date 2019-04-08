
int main()
{
	int a[12]={31,0,31,30,31,30,31,31,30,31,30,31},y,m1,m2,i,j,n,sum1=0,sum2=0;
	cin>>n;
	for(i=1;i<=n;i++)
	{
		cin>>y>>m1>>m2;
		if(y%4==0&&y%100!=0||y%400==0)a[1]=29;
		else a[1]=28;
		if(m1>m2)
		{
			for(j=m2-1;j<=m1-2;j++)
			{
				sum1=sum1+a[j];
			}
			if(sum1%7==0)cout<<"YES"<<'\n';
			else if(sum1%7!=0)cout<<"NO"<<'\n';
		    sum1=0;
		}
		if(m1<m2)
		{
			for(j=m1-1;j<=m2-2;j++)
			{
				sum2=sum2+a[j];
			}
			if(sum2%7==0)cout<<"YES"<<'\n';
			else if(sum2%7!=0)cout<<"NO"<<'\n';
			sum2=0;
		}
	}

	return 0;
}

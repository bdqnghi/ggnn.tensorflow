int main()
{
	int n,k=0;
	int y,m1,m2;
	int a[12]={31,28,31,30,31,30,31,31,30,31,30,31},b[12]={31,29,31,30,31,30,31,31,30,31,30,31};
		cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>y>>m1>>m2;
		k=0;
		if(y%4!=0||(y%100==0&&y%400!=0))
		{
			if(m1>m2)
			{
				for(int j=m2;j<m1;j++)
					k+=a[j-1];
			}
			else
				for(int j=m1;j<m2;j++)
					k+=a[j-1];
		}
		else
		{
			if(m1>m2)
			{
				for(int j=m2;j<m1;j++)
					k+=b[j-1];
			}
			else
				for(int j=m1;j<m2;j++)
					k+=b[j-1];
		}
		if(k%7==0)
			cout<<"YES"<<endl;
		else
			cout<<"NO"<<endl;
	}
	return 0;
}
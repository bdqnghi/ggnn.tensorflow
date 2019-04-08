int a[13]={0,31,28,31,30,31,30,31,31,30,31,30,31};
int b[13]={0,31,29,31,30,31,30,31,31,30,31,30,31};

int main()
{
	int n;
	cin>>n;
	int i,j;
	for(i=1;i<=n;i++)
	{
		int y,m1,m2;
		cin>>y>>m1>>m2;
		if(m1>m2)
		{
			int m=m1;m1=m2;m2=m;
		}
		if(y%4==0&&y%100!=0||y%400==0)
		{
			int count=0;
			for(j=m1;j<=m2-1;j++)
				count=count+b[j];
			if(count%7==0)
				cout<<"YES"<<endl;
			else
				cout<<"NO"<<endl;
		}
		else
			{
			int count=0;
			for(j=m1;j<=m2-1;j++)
				count=count+a[j];
			if(count%7==0)
				cout<<"YES"<<endl;
			else
				cout<<"NO"<<endl;
		}
	}
	return 0;
}


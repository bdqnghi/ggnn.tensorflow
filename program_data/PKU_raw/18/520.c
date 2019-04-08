
int main()
{
	int n,i,j,y,m1,m2,p;
	int a[103][103],s=0;
	cin >> n;
	for(y=1;y<=n;y++)
	{
		p=n;
		s=0;m1=999999;m2=999999;
		for(i=1;i<=p;i++)
			for(j=1;j<=p;j++)
				cin >> a[i][j];
		while(p>1)
		{
			
			//for(i=1;i<=p;i++)for(j=1;j<=p;j++)cout << a[i][j];
			for(i=1;i<=p;i++)
			{
				m1=a[i][1];
				for(j=1;j<=p;j++)
					if(m1>a[i][j])
						m1=a[i][j];
				for(j=1;j<=p;j++)
					a[i][j]-=m1;
			}
			//for(i=1;i<=p;i++)for(j=1;j<=p;j++)cout << a[i][j];
			for(i=1;i<=p;i++)
			{
				m2=a[1][i];
				for(j=1;j<=p;j++)
					if(m2>a[j][i])
						m2=a[j][i];
				for(j=1;j<=p;j++)
					a[j][i]-=m2;
			}
			//for(i=1;i<=p;i++)for(j=1;j<=p;j++)cout << a[i][j];
			s+=a[2][2];
			for(i=2;i<=p-1;i++)
				for(j=1;j<=p;j++)
					a[i][j]=a[i+1][j];
			//for(i=1;i<=p;i++)for(j=1;j<=p;j++)cout << a[i][j];
			for(i=2;i<=p-1;i++)
				for(j=1;j<=p-1;j++)
					a[j][i]=a[j][i+1];
			//for(i=1;i<=p;i++)for(j=1;j<=p;j++)cout << a[i][j];
			p--;
			//cout << s<<p;
		}
		cout << s <<endl;
	}
	return 0;
}





int main()

{

	int n,m,o,i,j;

	double a[81]={0};

	char b[41][7];

	cin>>n;

	for(i=1;i<=n;i++)

	{

		cin>>b[i]>>a[i];

	}

	m=1;

	o=0;

	for(i=1;i<=n;i++)

	{

		if(b[i][0]=='m')

		{
			
			a[m+n]=a[i];

			m++;

		}

		if(b[i][0]=='f')

		{
			a[2*n-o]=a[i];

			o++;

		}

	}

	double x;
	
	for(i=1+n;i<=m+n-1;i++)

	{

		for(j=m+n-1;j>i;j--)

		{

			if(a[j]<a[j-1])

			{

				x=a[j];

				a[j]=a[j-1];

				a[j-1]=x;

			}

		}

	}

	for(i=m+n;i<=2*n;i++)

	{

		for(j=2*n;j>i;j--)

		{

			if(a[j]>a[j-1])

			{

				x=a[j];

				a[j]=a[j-1];

				a[j-1]=x;

			}

		}

	}

	for(i=n+1;i<2*n;i++)

	{

		cout<<fixed;
		
		cout<<setprecision(2)<<a[i]<<" ";

	}

	cout<<fixed;

	cout<<setprecision(2)<<a[2*n];

	return 0;
}

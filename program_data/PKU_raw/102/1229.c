int main()
{
	double  boy[40],girl[40],m;
	int  n,c1=0,c2=0,j,k;
	cin>>n;
	char a[10];

	for (int i=0;i<n;i++)
	{
		cin>>a;
		if (a[0]=='m')
		{
			cin>>boy[c1];
			c1++;
		}
		else if (a[0]=='f')
		{
			cin>>girl[c2];
			c2++;
		}
	}


	for (j=0;j<c1-1;j++)
	{
		for ( k=c1-1;k>j;k--)
		{
			if (boy[k]<boy[k-1])
			{
				m=boy[k];boy[k]=boy[k-1];boy[k-1]=m;
			}
		}
	}


	for (j=0;j<c2-1;j++)
	{
		for ( k=c2-1;k>j;k--)
		{
			if (girl[k]>girl[k-1])
			{
				m=girl[k];girl[k]=girl[k-1];girl[k-1]=m;
			}
		}
	}

	cout<<fixed<<setprecision(2)<<boy[0];
	for (j=1;j<c1;j++)
	{
		cout<<fixed<<setprecision(2)<<" "<<boy[j];
	}
	for (j=0;j<c2;j++)
	{
		cout<<fixed<<setprecision(2)<<" "<<girl[j];
	}
	cout<<endl;
	return 0;
}

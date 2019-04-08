int main()
{
	int i=0,n=0,j;
	int a[1000],b[1000],c[1001];
	char comma;
	int max=0;
	
	memset(c,0,sizeof(c));

	while (cin>>a[n++])
	{
		comma=getchar();
		if (comma!=',') break;
	}

	for (i=0;i<n;i++)
	{
		cin>>b[i];
		if (i<n-1) getchar();

		for (j=a[i];j<b[i];j++)
		{
			c[j]++;
			if (c[j]>max) max=c[j];
		}
	}

	cout<<n<<" "<<max<<endl;;

	return 0;


}
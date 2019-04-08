main()
{
	int a[1000],b[1000];
	char c;
	int i,j,k,l;
	int m;
	int min=1000,max=0;
	for(i=0;;i++)
	{
		scanf("%d%c",&a[i],&c);
		if(a[i]<min) min=a[i];
		if(c=='\n') break;
	}
	m=i+1;
	for(i=0;i<m;i++)
	{
		scanf("%d%c",&b[i],&c);
		if(b[i]>max) max=b[i];
	}printf("%d",m);
	int t[1500],M;
	for(i=min;i<=max;i++)
	{
		t[i]=0;
		for(j=0;j<m;j++)
		{
			if(a[j]<=i&&b[j]>i) t[i]++; 
		}
	}
	M=t[min];
	for(i=min;i<=max;i++)
	{
		if(t[i]>M) M=t[i];
	}
	printf(" %d",M);
}

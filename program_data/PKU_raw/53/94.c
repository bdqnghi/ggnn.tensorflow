void main()
{	
	int n,a[300],i,b[300],j;
	scanf("%d",&n);
	for (i=0;i<n;i++) { scanf("%d",&a[i]); b[i]=0;}
	for (i=0;i<n;i++)
		for (j=i+1;j<n;j++)
			if ((a[i]==a[j])&&b[j]==0) b[j]=1;
			for (i=0;i<n;i++) if (b[i]==0)  j=a[i]; 
	i=0;
	while (a[i]!=j) 
	{
		if (b[i]==0) printf("%d,",a[i]);
		i++;
	}
	printf("%d\n",j);
}
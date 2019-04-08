
main()
{
	int a[25],b[25],k,i,j,max=0;
	scanf("%d",&k);
	for(i=0;i<k;i++)
		scanf ("%d",a+i);
	for(i=k-1;i>=0;i--)
	{
		b[i]=1;
		for(j=i+1;j<k;j++)
			if(a[j]<=a[i])
				if(b[j]+1>b[i]) b[i]=b[j]+1;
		if(b[i]>max) max=b[i];
	}
	printf ("%d",max);
}
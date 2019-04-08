void main()
{
	int a[300],b[300],n,i,j,numb,s;
	scanf("%d",&n);
	for (i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	numb=1;
	s=0;
	b[0]=a[0];
	for (i=1;i<n;i++)
	{
		for (j=0;j<numb;j++)
		{
			if (s!=0) 
				break;
			if (a[i]==b[j])
				s=s+1;
		}
		if (s==0) 
		{	b[numb]=a[i];
			numb++;
		}
		else
			s=0;
	}
	for (i=0;i<(numb-1);i++)
		printf("%d,",b[i]);
	printf("%d",b[numb-1]);
}
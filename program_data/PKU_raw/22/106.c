main()
{
	int a[400],i,j,max,k,p=1;
	char c[400];
	for(i=0;;i++)
	{
		scanf("%d",&a[i]);
		scanf("%c",&c[i]);
		if(c[i]=='\n')
			break;
	}
	max=a[0];
	k=0;
	for(j=1;j<=i;j++)
		if(max<a[j])
		{
			max=a[j];
			k=j;
		}
	for(j=0;j<=i;j++)
		if(a[j]==max)
			a[j]=0;
	max=a[0];
	k=0;
	for(j=1;j<=i;j++)
		if(max<a[j])
		{
			max=a[j];
		}
	
	for(j=1;j<=i;j++)
		if(a[j]!=a[0])
			break;
	if(j==i+1)
			p=0;

	if(p==0)
		printf("No");
	else
		printf("%d",max);
		
}

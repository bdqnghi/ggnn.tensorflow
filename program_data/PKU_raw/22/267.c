void main()
{
	int a[300];
	int i=0;int j=0;int flag=0;
	int max=0;
	scanf("%d",&a[i]);
	i++;
	while(getchar()!='\n')
	{
		scanf("%d",&a[i]);
		i++;
	}

	if(i==1)
		printf("No\n");

	else{


	{for(j=0;j<=i-1;j++)
			if(a[j]==a[j+1])
				flag++;}
	if(flag==(i-1))
		printf("No\n");
	else
	{for(j=0;j<=i-1;j++)
	{ if(max<a[j])
	max=a[j];
	}
	for(j=0;j<=i-1;j++)
	{if(max==a[j])
	a[j]=0;}

	max=0;

	for(j=0;j<=i-1;j++)
	 if(max<a[j])
	max=a[j];
	printf("%d",max);
}}}






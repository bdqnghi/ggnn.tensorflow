main()
{
	int a[300],total=1,i,max1,max2,judge;
	scanf("%d",&a[1]);
	while(getchar()!='\n')
	{
		total++;
		scanf("%d",&a[total]);
	}
	if(total==1)
	{
		printf("No\n");
		goto end;
	}
	max1=a[1];
	for(i=1;i<=total;i++)
	{
		if(a[i]>max1)max1=a[i];
	}	
	judge=1;
	for(i=1;i<=total;i++)
	{
		if(a[i]<max1)
		{
			judge=0;
			max2=a[i];
		}
	}
	if(judge==1)
	{
		printf("No\n");
		goto end;
	}
	for(i=1;i<=total;i++)
	{
		if(a[i]<max1&&a[i]>max2)max2=a[i];
	}
	printf("%d\n",max2);
end:;
}


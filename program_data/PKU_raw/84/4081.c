main()
{
	int i=0,j=1,k=1,m=1,n,str[100];
	scanf("%d",&n);
	for(i=0;i<n;i++)
		scanf("%d",&str[i]);
	for(j=1;j<n;j++)
	{
		if(str[j-1]>str[j])
		{
			i=str[j];
			str[j]=str[j-1];
			str[j-1]=i;
		}
	}
	j=1;

	 for(j=1;j<n;j++)
	{
		if(str[j-1]>str[j])
		{
			i=str[j];
			str[j]=str[j-1];
			str[j-1]=i;
		}
	}



	printf("%d\n",str[n-1]);
    printf("%d\n",str[n-2]);

}

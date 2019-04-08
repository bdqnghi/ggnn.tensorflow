void main()
{
	int age[100],i,j,k,p=0,n;
	char a[100][10];
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%s %d",&a[i],&age[i]);
		if(age[i]>=60)p++;
	}
	for(j=1;j<=p;j++)
	{
		k=0;
		for(i=0;i<n;i++)
		{
			if(age[i]>age[k])
				k=i;

		}
		printf("%s\n",a[k]);
		age[k]=0;
	}
	for(i=0;i<n;i++)
	{
		if(age[i]!=0)
		{
			printf("%s\n",a[i]);
		}
	}

}
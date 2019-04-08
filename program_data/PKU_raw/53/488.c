void main()
{
	char a[300][3];
	int n,i,j;
	scanf("%d",&n);
	for(i=0;i<n;i++)
		scanf("%s",a[i]);


	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
			if(strcmp(a[i],a[j])==0)
				strcpy(a[j]," ");
	}
	printf("%s",a[0]);
	for(i=1;i<n;i++)
		if(strcmp((a[i])," ")!=0)
			printf(",%s",a[i]);
}
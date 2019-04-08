void main()
{
	char *p[100];
	int i=0,j;
    *(p+i)=(char *)malloc(100);
	while(scanf("%s",*(p+i))!=EOF)
	{
		i++;
		*(p+i)=(char *)malloc(100);
	}
	for(j=0;j<i-2;j++)
	{
		if (strcmp(*(p+j),*(p+i-2))==0)
			strcpy(*(p+j),*(p+i-1));
	}
	printf("%s",*p);
	for (j=1;j<i-2;j++)
		printf(" %s",*(p+j));
}

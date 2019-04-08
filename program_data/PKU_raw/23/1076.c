void main()
{
	int i=0;
	char *p[100];
	p[i]=(char *)malloc(100);
	while(scanf("%s",p[i])!=EOF)
	{i++;	p[i]=(char *)malloc(100);}
	for(i--;i>0;i--)
		printf("%s ",p[i]);
	printf("%s",p[0]);
}
	

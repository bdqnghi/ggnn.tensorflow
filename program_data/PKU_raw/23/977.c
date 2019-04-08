void main()
{
	int i=0;
	char (*p)[100];
	p=(char *)malloc(10000*sizeof(char));
	while (scanf("%s",p+i)!=EOF)//EOF?????
		i++;
	i--;//??????????,?????
		for(;i>0;i--)
		printf("%s ",p+i);
	printf("%s",p);
}
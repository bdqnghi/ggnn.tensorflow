void main()
{
	int i=0;
	char str[100][100];
	char (*p)[100];
	p=str;
	while (scanf("%s",p+i)!=EOF)//EOF?????
		i++;
	i--;//??????????,?????
		for(;i>0;i--)
		printf("%s ",p+i);
	printf("%s",p);
}
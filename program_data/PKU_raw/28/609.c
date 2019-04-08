void main()
{
	int i,j;
	char s[300][100];
	for(i=0;;i++)
	{
		scanf("%s",s[i]);
		if(getchar()=='\n') break;
	}
	for(j=0;j<i;j++)
	{
		printf("%d,",strlen(s[j]));
	}
	printf("%d",strlen(s[i]));
}

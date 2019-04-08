void main()
{
	char (*str)[100];
	char substr[100][100];
	int m=0,i;
	for(i=0;;i++)
	{
		scanf("%s",substr[i]);
		m=m+1;
		if(getchar()=='\n') break;
	}
	str=substr;
	for(i=m-1;i>0;i--)
		printf("%s ",str[i]);
	printf("%s",str[0]);
}
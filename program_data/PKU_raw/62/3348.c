int main()
{
	int i, j;
	char str[50][20], s;
	for(i=0;;i++)
	{
		scanf("%s",str[i]);
		if(s=getchar()=='\n')break;

	}
	for(j=0;j<i;j++)
	{
		printf("%s ", str[j]);
	}
	printf("%s", str[i]);
	return 0;
}
	
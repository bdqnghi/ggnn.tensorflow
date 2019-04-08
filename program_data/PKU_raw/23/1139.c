int main()
{
	int i, j, k=0, m=1;
	char s;
	char a[100][20]={'\0'};
	for(i=0;;i++)
	{
		scanf("%s",a[i]);
		if(s=getchar()=='\n')break;

	}
	printf("%s",a[i]);
	for(j=i-1;j>=0;j--)
		printf(" %s",a[j]);
	return 0;
}
void main()
{
	char a[80][20],b;
	int i,j;
	for(i=1;;i++)
	{
		scanf("%s",a[i]);
		b=getchar();
		if(b!=' ') break;
	}
	printf("%s",a[i]);
	for(j=i-1;j>=1;j--)
		printf(" %s",a[j]);
}
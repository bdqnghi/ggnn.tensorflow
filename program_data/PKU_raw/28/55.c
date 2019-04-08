void main()
{
	char a[300][50],c;
	int i=0,j;
	scanf("%s",a[i++]);
	while((c=getchar())!='\n')
		scanf("%s",a[i++]);
	for(j=0;j<i;j++)
	{
		printf("%d",strlen(a[j]));
		if(j!=i-1)
			printf(",");
	}
}
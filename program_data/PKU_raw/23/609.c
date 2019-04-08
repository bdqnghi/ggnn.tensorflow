void main()
{
	char a[50][1000],p;
	int i=0,count;
	do
	{
		i++;
		scanf("%s%c",a[i],&p);
	}while(p!='\n');
	count=i;
	for(i=count;i>=2;i--)
	{
		printf("%s ",a[i]);
	}
	printf("%s",a[1]);
}
void main()
{
	char a[100],b;
	int i,j;
	scanf("%s",a);
		printf("%d",strlen(a));
	while(1)
	{
		if((b=getchar())=='\n')break;
		else
		{
		scanf("%s",a);
		printf(",%d",strlen(a));
		}
	}
	
}
		
		
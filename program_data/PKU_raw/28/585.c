
void main()
 {
	char a[20],b;
	scanf("%s",a);
	printf("%d",strlen(a));
	b=getchar();
	if (b==' ')
	{
	for (;;)
	{
		scanf("%s",a);
		printf(",%d",strlen(a));
		b=getchar();
		if (b!=' ') break;
	}
	}
 }

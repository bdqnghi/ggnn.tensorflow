void main()
{
	char word[300][50],c=' ';
	int num[300]={0},i,t;
	for(i=1;c==' ';i++)
	{
		scanf("%s",word[i]);
		c=getchar();
		num[i]=strlen(word[i]);
		t=i;
	}
	for(i=1;i<t;i++)
		printf("%d,",num[i]);
		printf("%d",num[t]);

		
	}
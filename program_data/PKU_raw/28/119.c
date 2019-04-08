void main()
{
	char c;
	int len;
	char a[100];
	int flag=0;
	while(1)
	{
		scanf("%s",a);
		len=strlen(a);
		if(flag==0)
		{
			flag=1;
			printf("%d",len);
		}
		else if(flag==1)
		{
			printf(",%d",len);
		}
		c=getchar();
		if(c=='\n')
			break;
	}
}

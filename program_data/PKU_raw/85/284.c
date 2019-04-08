void judge(char str[]);
void main()
{
	char c[100][100];
	int n,i;
	scanf("%d",&n);
	for(i=0;i<n;i++)
		scanf("%s",&c[i]);
	for(i=0;i<n;i++)
		judge(c[i]);
}
void judge(char str[])
{
	int j;
	if(str[0]!='_'&&(str[0]>'Z'||str[0]<'A')&&(str[0]>'z'||str[0]<'a'))
		printf("no\n");
	else
	{
		for(j=1;str[j]!='\0';j++)
		{
			if(str[j]!='_'&&(str[j]>'Z'||str[j]<'A')&&(str[j]>'z'||str[j]<'a')&&(str[j]<'0'||str[j]>'9'))
			{
				printf("no\n");
				break;
			}
		}
		if(str[j]=='\0')
			printf("yes\n");
	}
}
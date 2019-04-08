int main()
{
	int n,i,j;
	scanf("%d\n",&n);
	char str[100];
	int flag;
	for(i=1;i<=n;i++)
	{
		flag=1;
		gets(str);
		for(j=0;j<strlen(str);j++)
		{
		if (!(str[j]=='_'||(str[j]>='a'&&str[j]<='z')||(str[j]>='A'&&str[j]<='Z')||(str[j]>='0'&&str[j]<='9'))) 
		{
	        flag=0;
			break;
		}
		if(j==0&&(str[j]>='0'&&str[j]<='9'))
		{
			flag=0;
		}
		}
		printf("%d\n",flag);
	}
	return 0;
}
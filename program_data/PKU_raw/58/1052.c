void main()
{
	int i=0,j=0,l=0,n=0;
	char str[100]={0};
	scanf("%d",&n);
	gets(str);
	for(;i<n;i++)
	{
		gets(str);
		l=strlen(str);
		if(str[0]=='_'||(str[0]>='A'&&str[0]<='Z')||(str[0]>='a'&&str[0]<='z'))
		{
			for(j=0;j<l;)
			{
				if((str[j]>='0'&&str[j]<='9')||(str[j]=='_')||(str[j]>='A'&&str[j]<='Z')||(str[j]>='a'&&str[j]<='z'))
				{
					j++;
				}
				else
				{
					printf("0\n");
					break;
				}
				if(j==l)
				{
					printf("1\n");
					break;
				}
			}
		}
		else
			printf("0\n");
	}
}

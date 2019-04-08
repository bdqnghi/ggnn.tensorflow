int main()
{
	int n,i,j,w;
	char s[100][81];
	char str[100];
	gets(str);
	n=atoi(str);
	for(w=0;w<n;w++)
	{
		gets(s[w]);
	}
	for(i=0;i<n;i++)
	{
		int flag=1;
		for(j=0;j<strlen(s[i]);j++)
		{
			if(s[i][0]!='_'&&(s[i][0]<'A'||(s[i][0]>'Z'&&s[i][0]<'a')||s[i][0]>'z'))
			{
				flag=0;
				break;
			}
			if(s[i][j]==' ')
			{
				flag=0;
				break;
			}
			if(!(s[i][j]=='_'||(s[i][j]>='A'&&s[i][j]<='Z')||(s[i][j]>='a'&&s[i][j]<='z')||s[i][j]>='0'&&s[i][j]<='9'))
			{
				flag=0;
				break;
			}
		}
		if(flag==0)
		{
			printf("0");
		}
		else
			printf("1");
		printf("\n");
	}
	

	return 0;
}
int main()
{
	int n,i=1,j,len;
	char s[81]={0};
	scanf("%d",&n);
	getchar();
	for(j=0;j<n;j++)
	{
	gets(s);
	if(s[0]=='_'||(s[0]>='A'&&s[0]<='Z')||(s[0]>='a'&&s[0]<='z'))
	{
		i=1;
		while(s[i]!='\0')
		{
			if((s[i]<'0'||(s[i]>'9'&&s[i]<'A')||(s[i]>'Z'&&s[i]<'a')||s[i]>'z')&&s[i]!='_')
			{
				printf("0\n");
				break;
			}
			i++;
		}
		if(s[i]=='\0')printf("1\n");
	}
	else
    printf("0\n");
}
return 0;
}
		

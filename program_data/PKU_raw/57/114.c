void delsuffix(char main[],int m)
{
	main[strlen(main)-m]='\0';
}
int check(char main[],int len1,char suffix[],int len2)
{
	int n=len1-1,m=len2-1;
	while(m>=0&&main[n]==suffix[m])
	{
		m--;
		n--;
	}
	if(m>=0)
		return 0;
	else
		return 1;
}
void main()
{
	int number,i,lensuffix[3]={2,2,3};
	char s[30],suffix[3][4]={"er","ly","ing"};
	scanf("%d",&number);
	for(i=1;i<=number+1;i++)
	{
		gets(s);
		int m;
		for(m=0;m<3;m++)
		{
			if(check(s,strlen(s),suffix[m],lensuffix[m]))
			{
				delsuffix(s,lensuffix[m]);
				printf("%s\n",s);
				break;
			}
		}
	}
}
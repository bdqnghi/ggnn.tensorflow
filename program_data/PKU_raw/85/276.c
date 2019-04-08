int first(char x)
{
	if(x=='_'||(x>='a'&&x<='z')||(x>='A'&&x<='Z'))return 1;
	else return 0;
}
int term(char x)
{
	if(x=='_'||(x>='a'&&x<='z')||(x>='A'&&x<='Z')||(x>='0'&&x<='9'))return 1;
	else return 0;
}
int main()
{
	int n,i,j,t;
	char ch[50];
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%s",ch);
		t=1;
		if(first(ch[0])==0)printf("no\n");
		else
		{
			for(j=1;j<strlen(ch);j++)
			{
				if(term(ch[j])==0)
				{
					t=0;
					break;
				}
			}
			if(t==1)printf("yes\n");
			else printf("no\n");
		}
	}
	return 0;
}
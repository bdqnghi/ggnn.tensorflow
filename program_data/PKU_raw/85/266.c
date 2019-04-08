void judge(char s[]);
void main()
{
	char st[100][20],n,i;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%s",st[i]);
	}
	for(i=0;i<n;i++)
	{
		judge(st[i]);
	}
}
void judge(char s[])
{
    int i,temp=-1;
	if((s[0]>='a'&&s[0]<='z')||(s[0]=='_')||(s[0]>='A'&&s[0]<='Z'))
	{
		for(i=1;i<20;i++)
		{
			if(s[i]=='\0')
				break;
			else if((s[i]>='a'&&s[i]<='z')||(s[i]=='_')||(s[i]>='A'&&s[i]<='Z')||(s[i]>='0'&&s[i]<='9'))
			{
				temp=1;
			}
			else
			{
				temp=-1;
				break;
			}
		}
	}
	else 
	{
		temp=-1;
	}
	if(temp==1)
	{
		printf("yes\n");
	}
	else
	{
		printf("no\n");
	}
}

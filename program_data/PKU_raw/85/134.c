int main()
{
	int n,i,j,a=0;
	char s[20];
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		a=0;
		scanf("%s",s);
		if((s[0]>='a'&&s[0]<='z')||(s[0]>='A'&&s[0]<='Z')||s[0]=='_')
		{	
			for(j=1;s[j]!='\0';j++)
			{
				if((s[j]>='a'&&s[j]<='z')||(s[j]>='A'&&s[j]<='Z')||s[j]=='_'||(s[j]>='0'&&s[j]<='9'))
					continue;
			    else
					a=1;
			}
		}
		else
			a=1;
		if(a==1)
			printf("no\n");
		else
			printf("yes\n");
	}
	return 0;
}

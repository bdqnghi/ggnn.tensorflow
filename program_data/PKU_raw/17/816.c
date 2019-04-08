
void match(char *p)
{
	int n=(int )strlen(p);
	int a[100]={0};
	int i,j;
	for(i=j=0;i<n;i++)
	{
		if(p[i]==')')
		{
			for(j=i;j>=0;j--)
				if(p[j]=='(')
				{
					p[j]=p[i]='a';
					break;
				}
		}
	}
	for(i=0;i<n;i++)
		if(p[i]=='(')printf("$");
		else if(p[i]==')') printf("?");
		else printf(" ");
	printf("\n");

}
void main()
{
	int i=0,n;
	scanf("%d",&n);
	while(i<n)
	{
		char s[103]={'\0'};
		scanf("%s",s);
                printf("%s\n",s);
		match(s);
		i++;
	}
}
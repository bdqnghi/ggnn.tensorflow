int main()
{
	int t,i,j,l;
	char s[100000];
	scanf("%d",&t);
	for(i=0;i<t;i++)
	{	
		char yici[100000]={'0'};
		scanf("%s",s);
		int len=strlen(s);
		int a=0;
		for(j=0;s[j];j++)
		{
			int k=0;
			while(k<j)
			{
				if(s[k]==s[j])
				{
					break;
				}
				k++;
			}
			if(k==j)
			{
				for(l=len-1;l>j;l--)
				{
					if(s[l]==s[j])
					{
						break;
					}
				}
				if(l==j)
				{
					yici[a]=s[j];
					a++;
				}
			}
		}
		if(yici[0]=='0')
		{
			printf("no\n");
		}
		else
		{
			printf("%c\n",yici[0]);
		}
	}
	return 0;
}


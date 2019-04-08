int main()
{
	int n,i;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		char s[100010]={'\0'};
		int b[100010]={0};
		scanf("%s",s);
		int l=strlen(s);
		int j,k;
		for(j=0;j<l;j++)
		{
			for(k=0;k<l;k++)
			{
				if(s[j]==s[k])
				{
					b[j]++;
				}
			}
		}
		for(j=0;j<l;j++)
		{
			if(b[j]==1)
			{
				printf("%c\n",s[j]);
				break;
			}
		}
		if(j==l)
		{
			printf("no\n");
		}
	}
}
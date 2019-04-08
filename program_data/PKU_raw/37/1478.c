int main()
{
	int t,k;
	char s[M];
	scanf("%d",&t);
	for(k=0;k<t;k++)
	{
		int count[M]={0},flag=0;
		int n,i,j;
		scanf("%s",s);
		n=strlen(s);
		for(i=0;i<n;i++)
		{
			for(j=0;j<n;j++)
			{
				if(s[j]==s[i])
					count[i]++;
			}
		}
		for(i=0;i<n;i++)
		{
			if(count[i]==1)
			{
				printf("%c\n",s[i]);
				flag=1;
				break;
			}
		}
		if(flag==0)
			printf("no\n");
	}
	
	return 0;
}
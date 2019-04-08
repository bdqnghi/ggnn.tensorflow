char s[1000];
int dp[1000];
int main(void)
{
	//freopen("in.txt","r",stdin);
	int i,j,k,n;
	scanf("%d",&n); 
	while(scanf("%s",s)==1)
	{
		memset(dp,0,sizeof(dp));
		n=strlen(s);
		for(i=0;i<n;i++)
		{
			if(s[i]=='(')
			    dp[i]=-1;
			if(s[i]==')')
			    dp[i]=1;
		}
		for(i=0;i<n;i++)
		{
			if(s[i]==')')
			{
				for(j=i-1;j>=0;j--)
				{
					if(s[j]=='('&&dp[j]==-1)
					{
						dp[i]=0;
						dp[j]=0;
						break;
					}
				}
			}
		}
		printf("%s\n",s);
		for(i=0;i<n;i++)
		{
			if(dp[i]==-1)
			    printf("$");
			else if(dp[i]==1)
			    printf("?");
			else
			printf(" ");
		}
		printf("\n");
	}
	return 0;
}
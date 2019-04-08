
void main(void)
{
	int n;
	scanf("%d\n",&n);
	char s[501];
	gets(s);
	int len=strlen(s);

	int i,j;
	char sub[500][5];
	for(i=0;i<=len-n;i++)
	{
		for(j=0;j<=n-1;j++)
			sub[i][j]=s[i+j];
		sub[i][n]=0;
	}

	int time[500],t=0,x=1;
	for(i=0;i<=len-n-1;i++)
	{
		time[i]=1;

		if(sub[i][0]!=0)
		{
			for(j=i+1;j<=len-n;j++)
				if(strcmp(sub[i],sub[j])==0)
				{
					time[i]++;
					sub[j][0]=0;
				}

			if(x<time[i])
				x=time[i];
		}
	}

	if(x==1)
		printf("NO\n");
	else
	{
		printf("%d\n",x);
		for(i=0;i<=len-n;i++)
			if(time[i]==x)
				printf("%s\n",sub[i]);
	}
}
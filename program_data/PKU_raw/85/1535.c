int main()
{
	int n,i,j,sum[100],c;
	char str[100][100];
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%s",str[i]);
	}
	for(i=0;i<n;i++)
	{
		sum[i]=0;
		for(j=0;str[i][j]!='\0';j++)
		{
			if(j==0)
			{
				if((str[i][j]>='a'&&str[i][j]<='z')||(str[i][j]>='A'&&str[i][j]<='Z')||(str[i][j]=='_'))
				{
					sum[i]++;
				}
			}
			else if(j>0)
			{
				if((str[i][j]>='a'&&str[i][j]<='z')||(str[i][j]>='A'&&str[i][j]<='Z')||(str[i][j]>='0'&&str[i][j]<='9')||(str[i][j]=='_'))
				{
					sum[i]++;
				}
			}
		}
	}
	for(i=0;i<n;i++)
	{
		c=strlen(str[i]);
		if(sum[i]==c)
		{
			printf("yes\n");
		}else{
			printf("no\n");
		}
	}
		return 0;
}


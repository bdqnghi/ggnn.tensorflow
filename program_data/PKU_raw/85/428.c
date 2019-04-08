int main()
{
	int n,i,k,t=0;
	char str[100][20];
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%s",str[i]);
	}
	for(i=0;i<n;i++)
	{
		if(str[i][0]>='0'&&str[i][0]<='9')
		{
			printf("no\n");
			continue;
		}
		int m=strlen(str[i]);
		t=0;
		for(k=0;k<m;k++)
		{
			
			if((str[i][k]=='_')||((str[i][k]>='a')&&(str[i][k]<='z'))||((str[i][k]>='A')&&(str[i][k]<='Z'))||(str[i][k]>='0')&&(str[i][k]<='9'))
			{
				t++;
			}
			else
			{
				printf("no\n");
				break;
			}
			if(t==m)
			{
				printf("yes\n");
				break;
			}
		}
		
	}
	return 0;
}

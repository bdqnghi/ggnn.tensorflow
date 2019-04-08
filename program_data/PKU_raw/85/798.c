
int main()
{
	int n,i,j,t,len[2000]={0};
	char str[200][200];
	scanf("%d",&n);
	scanf("\n");
	for(i=0;i<n;i++)
	{
		gets(str[i]);
		len[i]=strlen(str[i]);
	}
	for(i=0;i<n;i++)
	{
		if((('a'<=str[i][0])&&(str[i][0]<='z'))||(('A'<=str[i][0])&&(str[i][0]<='Z'))||str[i][0]=='_')
		{
			for(j=0;j<len[i];j++)
			{
				if((('a'<=str[i][j])&&(str[i][j]<='z'))||(('A'<=str[i][j])&&(str[i][j]<='Z'))||str[i][j]=='_'||(('0'<=str[i][j])&&(str[i][j]<='9')))
				{
					t=0;
				}
				else
				{
					t=1;
					break;
				}
			}
		}
		else 
		{
			t=1;
		}
		if(t==0)
		{
			printf("yes\n");
		}
		else if(t==1)
		{
			printf("no\n");
		}
	}
	
	return 0;		
}
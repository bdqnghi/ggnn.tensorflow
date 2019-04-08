int main()
{
	int n,i=0,j=0;
	scanf("%d",&n);
	char s[100][1000]={0};
	int a[100]={0};
	for(i=0;i<n;i++)
	{
		scanf("%s",s[i]);
		a[i]=strlen(s[i]);
		if(s[i][a[i]-1]=='g')
		{
			for(j=0;j<a[i]-3;j++)
			{
				printf("%c",s[i][j]);
			}
			printf("\n");
		}
		else 
		{
			for(j=0;j<a[i]-2;j++)
			{
				printf("%c",s[i][j]);
			}
			printf("\n");
		}
	}
	return 0;
}
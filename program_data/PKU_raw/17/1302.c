int main()
{
	int n,i,j,k,m;
	char a[110];
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		int b[110]={0};
		scanf("%s",a);
        m=strlen(a);
		for(j=0;j<m;j++)
		{
			if(a[j]=='(') b[j]=1;
			else if(a[j]==')') b[j]=-1;
		}
		for(j=m-1;j>=0;j--)
		{
			if(b[j]==1)
			{
				for(k=j;k<m;k++)
				{
					if(b[k]==-1)
					{
						b[j]=0;
						b[k]=0;
						break;
					}
				}
			}
		}
		for(k=0;k<m;k++)
			printf("%c",a[k]);
		printf("\n");
		for(k=0;k<m;k++)
		{
			if(b[k]==1) printf("$");
			else if(b[k]==-1) printf("?");
			else printf(" ");
		}
		printf("\n");
	}
	return 0;
}
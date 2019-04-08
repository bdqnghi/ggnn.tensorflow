
int main()
{
	char c[100][4][100]={'\0'};
	int i,j,k,n;
	scanf("%d\n",&n);
	for(i=0;i<n-1;i++)
	{
		gets(c[i][0]);
		gets(c[i][1]);
		gets(c[i][2]);
	}
	gets(c[n-1][0]);
	gets(c[n-1][1]);

	for(i=0;i<n;i++)
	{
		for(j=0;j<strlen(c[i][1]);j++)
		{
			c[i][3][j+strlen(c[i][0])-strlen(c[i][1])]=c[i][1][j];
		}
		for(j=0;j<(strlen(c[i][0])-strlen(c[i][1]));j++)
		{
			c[i][3][j]='0';
		}
		for(j=(strlen(c[i][0])-1);j>=0;j--)
		{
			if(c[i][0][j]>=c[i][3][j])
			{
				c[i][0][j]=c[i][0][j]-c[i][3][j]+48;
			}
			else
			{
				c[i][0][j]=58-(c[i][3][j]-c[i][0][j]);
				for (k=j-1;k>=0;k--)
				{
				    if (c[i][0][k]!='0')
					{
				        c[i][0][k]=c[i][0][k]-1;
						break;
					}
				    else
					{
					    c[i][0][k]='9';
					}
				}
			}
		}
		printf("%s\n",c[i][0]);
		
	}
	return 0;
}
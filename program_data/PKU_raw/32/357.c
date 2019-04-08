int main()
{
	int n;
	scanf("%d",&n);
	scanf("\n");
	char ***p;
	int i;
	int j;
	int k;
	p=(char ***)malloc(n*sizeof(char **));
	for(i=0;i<n;i++)
	{
		p[i]=(char **)malloc(2*sizeof(char *));
		for(j=0;j<2;j++)
		{
			p[i][j]=(char *)malloc(100*sizeof(char));
			scanf("%s",p[i][j]);
			if(j==0)
				scanf("\n");
			else if(j==1&&i==n-1)
			{}
			else
			{
				scanf("\n\n");
			}
		}
	}
	int tuiwei;
	for(i=0;i<n;i++)
	{
		int a=strlen(p[i][0]);
		int b=strlen(p[i][1]);
		for(j=a-1,tuiwei=0;j>=0;j--)
		{
			if(j>=a-b)
			{
				k=j-(a-b);
				if(p[i][0][j]>=p[i][1][k]+tuiwei)
				{
					p[i][0][j]=p[i][0][j]-p[i][1][k]-tuiwei+'0';
					tuiwei=0;
				}
				else
				{
					p[i][0][j]=p[i][0][j]+10-p[i][1][k]-tuiwei+'0';
					tuiwei=1;
				}
			}
			else
			{
				if(p[i][0][j]>=tuiwei)
				{
					p[i][0][j]=p[i][0][j]-tuiwei;
					tuiwei=0;
				}
				else
				{
					p[i][0][j]=p[i][0][j]+10-tuiwei;
					tuiwei=1;
				}
			}
		}
	}
	for(i=0;i<n;i++)
	{
		if(i<=n-2)
		printf("%s\n",p[i][0]);
		else
		printf("%s",p[i][0]);
	}
}

int main()
{
	char a[501];
	char b[500][6];
	int n;
	scanf("%d",&n);
	scanf("%s",a);
	int i,j,m,x;
	x=strlen(a);
	for(i=0;i<=x-n;i++)
	{
		for(j=0;j<n;j++)
		{
			b[i][j]=a[i+j];
		}
	}
	int y;
	int c[500]={0};
	for(i=0;i<=x-n;i++)
	{
		for(j=i+1;j<=x-n;j++)
		{
			for(m=0;m<n;m++)
			{
				if(b[i][m]!=b[j][m])
				{
                    y=0;
					break;
				}
				else
				{
					y=1;
				}
			}
			if(y==1)
			{
				c[i]++;
			}
		}
	}
	y=0;
	for(i=0;i<=x-n;i++)
	{
		if(y<c[i])
		{
			y=c[i];
		}
	}
	if(y==0)
	{
		printf("NO\n");
	}
	else
	{

		printf("%d\n",y+1);
		for(i=0;i<=x-n;i++)
		{
			if(c[i]==y)
			{
				for(j=0;j<n;j++)
				{
					printf("%c",b[i][j]);
				}
				putchar('\n');
			}
		}
	}
	return 0;
}
			
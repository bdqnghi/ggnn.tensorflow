int main()
{
	int a[5][5];
	int b[5][5];
	int i,j;
	int n,m,x,y;
	for(i=0;i<5;i++)
	{
		for(j=0;j<5;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	scanf("%d %d",&n,&m);
		for(i=0;i<5;i++)
	{
		for(j=0;j<5;j++)
		{
			if(a[i][j]==n)
			{
			   x=1;
			   break;
			}
			else
			{
				x=0;
			}
		}
		if(x==1)
		{
			break;
		}
		}
		for(i=0;i<5;i++)
		{
			for(j=0;j<5;j++)
			{
				if(a[i][j]==m)
				{
					x=1;
					break;
				}
				else
				{
					x=0;
				}
			}
			if(x==1)
			{
				break;
			}
		}
	if(x==0||n>4||m>4)
	{
		printf("error\n");
	}
	else
	{
		
		for(i=0;i<5;i++)
		{
			for(j=0;j<5;j++)
			{
				b[i][j]=a[i][j];
			}
		}
		for(j=0;j<5;j++)
		{
			b[n][j]=a[m][j];
		}
		for(j=0;j<5;j++)
		{
			b[m][j]=a[n][j];
		}
		for(i=0;i<5;i++)
		{
			for(j=0;j<5;j++)
			{
				printf("%d",b[i][j]);
				if(j!=4)
				{
					putchar(' ');
				}
				else
				{
					putchar('\n');
				}
			}
		}
	}
	return 0;
	
}

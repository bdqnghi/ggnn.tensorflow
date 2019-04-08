int a[5][5];
int m;
int n;
int pan(int m,int n)
{
	int c[5];
	int q;
	if(m<=4&&m>=0&&n<=4&&n>=0)
	{
		int c[5];
		int q;
		for(q=0;q<=4;q++)
		{
			c[q]=a[m][q];
			a[m][q]=a[n][q];
			a[n][q]=c[q];
		}
		return 1;
	}
	else
	{
        return 0;
	}
}
int main()
{
	int i,j;
	int k;
	int pan(int m,int n);
	for(i=0;i<=4;i++)
	{
		for(j=0;j<=4;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	scanf("%d %d",&m,&n);
	k=pan(m,n);
    if(k==0)
	{
		printf("error");
	}
	else
	{
		for(i=0;i<=4;i++)
	{
		for(j=0;j<=4;j++)
		{
			printf("%d",a[i][j]);
			if(j!=4)
			{
				printf(" ");
			}
			else
			{
				printf("\n");
			}
		}
	}
	}
	return 0;
}
int change(int a[5][5],int n,int m)
{
	if(n>=0&&n<=4&&m>=0&&m<=4)
	{
		int i,t;
		for(i=0;i<5;i++)
		{
			t=a[m][i];
			a[m][i]=a[n][i];
			a[n][i]=t;
		}
		return 1;
	}
	else return 0;
}
int main()
{
	int b[5][5];
	int k,l,m,n,t;
	for(k=0;k<5;k++)
	{
		for(l=0;l<5;l++)
		{
			scanf("%d",&b[k][l]);
		}
	}
	scanf("%d%d",&m,&n);
	if(change(b,m,n)==0)
	{printf("error\n");}
	else
	{
		if(change(b,m,n)==1)
		{
			for(k=0;k<5;k++)
			{
				t=b[m][k];
				b[m][k]=b[n][k];
				b[n][k]=t;
			}
			for(k=0;k<5;k++)
			{
				for(l=0;l<4;l++)
				{
					printf("%d ",b[k][l]);
				}
				printf("%d\n",b[k][4]);
			}
		}
	}
	return 0;
}

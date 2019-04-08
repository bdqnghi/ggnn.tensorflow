
void go(int a[5][5],int n,int m)
{
	int b[5],i,j;
	if(n<0||n>4||m<0||m>4)
	{printf("error");}
	else
	{
		for(i=0;i<5;i++)
		{
			b[i]=a[n][i];
			a[n][i]=a[m][i];
			a[m][i]=b[i];
		}
		for(i=0;i<5;i++)
		{
			for(j=0;j<5;j++)
			{
				printf("%d",a[i][j]);
				if(j!=4)printf(" ");
			}
			printf("\n");
		}
		

	}

	
}

int main()
{
	int a[5][5],i,j,n,m;
	for(i=0;i<5;i++)
	{
		for(j=0;j<5;j++)
		{
			scanf("%d",&a[i][j]);
		}
		

	}
	scanf("%d %d",&n,&m);
	go(a,n,m);
	
	return 0;
}

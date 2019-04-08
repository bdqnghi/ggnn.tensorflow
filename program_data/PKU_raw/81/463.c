
int f(int a[][5],int m,int n)
{
	int k,i;
	if(m<5&&m>=0&&n<5&&n>=0)
	{for(i=0;i<5;i++)
		{k=a[m][i];
		a[m][i]=a[n][i];
		a[n][i]=k;
		}
	return 1;
	}
	else return 0;
}

void main()
{
	int i,j,m,n,k;
	int a[5][5];
	for(i=0;i<5;i++)
		for(j=0;j<5;j++)
		scanf("%d",&a[i][j]);
		
	scanf("%d%d",&m,&n);
    k=f(a,m,n);
	if(k==1)
		for(i=0;i<5;i++)
		{for(j=0;j<4;j++)
		printf("%d ",a[i][j]);
		printf("%d\n",a[i][4]);
		}
	
	else printf("error\n");
}


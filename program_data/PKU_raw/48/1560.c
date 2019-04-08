
int a[9][9],b[9][9];

void work(int x,int y,char s)
{
	int i,j,q;
	q=(s=='b')?a[x][y]:b[x][y];
	for (i=x-1;i<=x+1;i++)
		for (j=y-1;j<=y+1;j++)
			if (s=='a')
				a[i][j]+=q;
			else 
				b[i][j]+=q;
}

int main()
{
	int m,n,k,i,j;
	scanf("%d %d",&m,&n);
    a[4][4]=m;
    for (k=1;k<=n;k++)
		if (k%2==1)
		{
			for (i=0;i<9;i++)
				for (j=0;j<9;j++)
					b[i][j]=a[i][j];
			for (i=0;i<9;i++)
				for (j=0;j<9;j++)
					if (a[i][j]>0)
						work(i,j,'b');
		}
		else 
		{
			for (i=0;i<9;i++)
				for (j=0;j<9;j++)
					a[i][j]=b[i][j];
			for (i=0;i<9;i++)
				for (j=0;j<9;j++)
					if (b[i][j]>0)
						work(i,j,'a');
		}
    if (n%2==1)
		for (i=0;i<9;i++)
		{
			for (j=0;j<8;j++)
				printf("%d ",b[i][j]);
			printf("%d\n",b[i][j]);
		}
	else
		for (i=0;i<9;i++)
		{
			for (j=0;j<8;j++)
				printf("%d ",a[i][j]);
			printf("%d\n",a[i][j]);
		}

    return 0;
}

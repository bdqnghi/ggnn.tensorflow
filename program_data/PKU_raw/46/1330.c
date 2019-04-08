
int re(int a[100][100],int row,int col,int b[])
{
	int i,j,k=0,p,mm,m;
	for(i=0;i<=row/2;i++)
	{
		for(j=i;j<col-i&&k<row*col;j++)
		{b[k]=a[i][j];
		k++;}

		for(p=i+1;p<row-i&&k<row*col;p++)
		{
			b[k]=a[p][j-1];
			k++;
		}

		for(mm=(col-2-i);mm>=i&&k<row*col;)
		{
			b[k]=a[row-i-1][mm];
			k++;
			mm--;
		}

		for(m=row-2-i;m>i&&k<row*col;m--)
		{
			b[k]=a[m][i];
			k++;
		}
	}

	return k;
}



int main()
{
	int a[100][100],b[10000];
	int row,col,i,j,xx;

	scanf("%d%d",&row, &col);

	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}

	xx=re(a,row,col,b);
	for(i=0;i<xx;i++)
		printf("%d\n",b[i]);
	return 0;
}

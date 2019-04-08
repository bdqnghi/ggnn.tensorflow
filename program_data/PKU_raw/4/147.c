
void main()
{
	void prt(int ary[][100],int a,int b);
	int array[100][100]={0};
	int row,col;
	scanf("%d %d",&row,&col);
	int i=0,j=0;
	for(i=0;i<row;i++)
		for(j=0;j<col;j++)
		{
			scanf("%d",&array[i][j]);
		}
	prt(array,row,col);
}
void prt(int ary[][100],int a,int b)
{
	int min(int c,int d);
	int max(int e,int f);
	int k=0,l=0;
	printf("%d",ary[0][0]);
	for(l=1;l<b;l++)
	{
		int m=l;
		for(k=0;k<=min(l,a-1);k++)
		{
			printf("\n%d",ary[k][m]);
			m-=1;
		}
	}
	k=1;l=b-1;
	for(k=1;k<a;k++)
	{
		int n=k;
		for(l=b-1;l>=max(0,b-a+k);l--)
		{
			printf("\n%d",ary[n][l]);
			n+=1;
		}
	}

}
int min(int c,int d)
{
	return(c>=d?d:c);
}
int max(int e,int f)
{
	return(e>=f?e:f);
}
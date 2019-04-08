
void input(int a[][100],int x,int y)
{
	int i,j;
	for(i=0;i<x;i++)
		for(j=0;j<y;j++)
			scanf("%d",*(a+i)+j);
}

void mult(int a[][100],int b[][100],int m, int n,int q)
{
	int i,j,k,t;
	for(i=0;i<m;i++)
		for(j=0;j<n;j++)
		{
			t=0;
			for(k=0;k<q;k++)
				t+=a[i][k]*b[k][j];
			if(j==n-1) printf("%d\n",t);
			else printf("%d ",t);
		}	
}

main()
{
	int a[100][100],b[100][100],x1,y1,x2,y2;
	scanf("%d%d",&x1,&y1);
	input(a,x1,y1);
	scanf("%d%d",&x2,&y2);
	input(b,x2,y2);
	mult(a,b,x1,y2,y1);
}
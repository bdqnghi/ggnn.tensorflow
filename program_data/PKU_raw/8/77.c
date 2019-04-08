int n,m,a[100],b[100];
void input()
{
	int j,k;
	scanf("%d %d",&n,&m);
	for(j=0;j<n;j++)
		scanf("%d",&a[j]);
	for(k=0;k<m;k++)
		scanf("%d",&b[k]);
}
void arrange(int n,int m,int x[],int y[])
{
	int j,k,t;
	for(j=0;j<n-1;j++)
		for(k=0;k<n-1-j;k++)
			if(x[k]>x[k+1])
			{
				t=x[k];
				x[k]=x[k+1];
				x[k+1]=t;
			}
	for(j=0;j<m-1;j++)
		for(k=0;k<m-1-j;k++)
			if(y[k]>y[k+1])
			{
	            t=y[k];
				y[k]=y[k+1];
				y[k+1]=t;
			}
}
void combine(int n,int m,int x[],int y[])
{
	int i;
	for(i=0;i<m;i++)
		x[n+i]=y[i];
}
void print(int n,int m,int x[])
{
	int i;
	for(i=0;i<m+n-1;i++)
		printf("%d ",x[i]);
	printf("%d",x[m+n-1]);
}

void main()
{
	input();
	arrange(n,m,a,b);
	combine(n,m,a,b);
	print(n,m,a);
}



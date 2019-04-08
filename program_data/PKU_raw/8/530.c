void duqu(int a[],int b[],int M,int N)
{
	int i;
	for (i=0;i<M;i++)
		scanf("%d",&a[i]);
	for (i=0;i<N;i++)
		scanf("%d",&b[i]);
}
void paixu(int a[],int b[],int M,int N)
{
	int i=0,j=0,temp;
	for (i=0;i<M;i++)
		for (j=i;j<M;j++)
		{
			if (a[j]<a[i])
			{
				temp=a[j];
				a[j]=a[i];
				a[i]=temp;
			}
		}
	for (i=0;i<N;i++)
		for (j=i;j<N;j++)
		{
			if (b[j]<b[i])
			{
				temp=b[j];
				b[j]=b[i];
				b[i]=temp;
			}
		}
}

void hebing(int a[],int b[],int c[],int M,int N)
{
	int i;
	for (i=0;i<M;i++)
		c[i]=a[i];
	for (i=M;i<M+N;i++)
		c[i]=b[i-M];
}
void shuchu(int C[],int M,int N)
{
	int i;
	for (i=0;i<M+N-1;i++)
		printf("%d ",C[i]);
	printf("%d",C[M+N-1]);
}

	
int main()
{
	int m,n;
	int a1[100],a2[100],a3[100]={0};
	scanf("%d%d",&m,&n);
	duqu(a1,a2,m,n);
	paixu(a1,a2,m,n);
	hebing(a1,a2,a3,m,n);
	shuchu(a3,m,n);
	return 0;
}
	
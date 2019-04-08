
void swapInt(int *p,int *q)
{
	int t=*p;*p=*q;*q=t;
}

int inside(int n,int m)
{
	return n>=0 && m>=0 && n<N && m<N;
}

void read(int a[N][N],int *p,int *q)
{
	int i,j;
	for(i=0;i<N;i++)
		for(j=0;j<N;j++)
			scanf("%d",*(a+i)+j);
	scanf("%d%d",p,q);
}

int swapMatrixRow(int (*a)[5],int n,int m)
{
	int i;
	if(!inside(n,m)) return 0;
	for(i=0;i<N;i++)
		swapInt(*(a+n)+i,*(a+m)+i);
	return 1;
}

void out(int a[N][N])
{
	int i,j;
	for(i=0;i<N;i++)
		for(j=0;j<N;j++)
			printf("%d%s",*(*(a+i)+j),j==N-1?"\n":" ");
}

int main()
{
	int a[N][N],n,m;
	read(a,&n,&m);
	if(swapMatrixRow(a,n,m)) out(a);
	else printf("error");
	return 0;

}
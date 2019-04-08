//int* getmemory(int m,int n)
//{
//	int *p=(int*)calloc(m,sizeof(int)*n);
//	return p;
//}
int count(int b,int c)
{
	int m=b,n=c;
	int i,j,sum,num[100][100],(*a)[100];
//	*a=getmemory(m,n);
	a=num;
	sum=0;
	for(i=0;i<m;i++)
	{
		for(j=0;j<n-1;j++)scanf("%d ",*(a+i)+j);
		scanf("%d",*(a+i)+(n-1));
	}
	for(j=0;j<n;j++)
	{
		sum=sum+(*(*a+j))+(*(*(a+m-1)+j));
	}
	for(i=1;i<m-1;i++)
	{
		sum=sum+(*(*(a+i)))+(*(*(a+i)+(n-1)));
	}
	return sum;
}

void main()
{
	int i,k,m,n,sum[100];
	scanf("%d\n",&k);
	for(i=0;i<k;i++)
	{
		scanf("%d %d",&m,&n);
		sum[i]=count(m,n);
	}
	for(i=0;i<k;i++)printf("%d\n",sum[i]);
}

void change(int *a,int n)
{
	int *p,t;
	p=a+n-1;
	t=*p;
	for(;p!=a;p--)
		*p=*(p-1);
	*p=t;
}

void main()
{
	int n,m,i,j;
	scanf("%d %d",&n,&m);
	int *a;
	a=LEN;
	for(i=0;i<n;i++)
		scanf("%d",a+i);
	for(j=0;j<m;j++)
		change(a,n);
	for(i=0;i<n-1;i++)
		printf("%d ",*(a+i));
	printf("%d\n",*(a+i));
}
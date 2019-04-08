void main()
{
	void f(int *p,int n,int m);
	int n,m,num[100],i;
	scanf("%d%d",&n,&m);
	for(i=0;i<n;i++)
		scanf("%d",&num[i]);
    f(num,n,m);
	for(i=0;i<n;i++)
	{
		if(i==0)
			printf("%d",num[i]);
		else
			printf(" %d",num[i]);
	}
	printf("\n");
}
void f(int *p,int n,int m)
{
	int *q,b;
	q=p;
	b=*(p+n-1);	
	for(q=p+n-1;q>p;q--)
		*q=*(q-1);
	*q=b;
	m--;
	if(m>0)
		f(p,n,m);

}



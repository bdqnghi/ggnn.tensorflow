void main()
{
	void inv(int *a,int n,int m);
	int a[100];
	int m,n,i;	
	scanf("%d %d",&n,&m);
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);//??
	inv(a,n,m);
	for(i=0;i<n;i++)
	{
		if(i!=0)
			printf(" ");
		printf("%d",a[i]);
	}
	printf("\n");
}
void inv(int *a,int n,int m)
{	
	int *p,a_end;
	a_end=*(a+n-1);
	for(p=a+n-1;p>a;p--)
		*p=*(p-1);
	*a=a_end;
	m--;
	if(m>0)
		inv(a,n,m);
}
	


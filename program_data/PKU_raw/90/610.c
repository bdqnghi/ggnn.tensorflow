
int core(int m,int n)
{
	int h;
	if(m==1 && n==1) h=1;
	else if(m<n && m>=1) h=core(m-1,n)+core(m,n-m);
	else if(m==n && m!=1 ) h=core(m-1,n)+1;
	else if(m>n && n>=1) h=core(m-1,n);
	else h=0;
	return(h);
}

void main()
{
	int t;
	
	scanf("%d",&t);
	int i;
	int m,n;
	int a[100];
	for(i=0;i<=t-1;i++)
	{	scanf("%d %d",&n,&m);
		a[i]=core(m,n);
		
	}
	for(i=0;i<=t-1;i++)
		printf("%d\n",a[i]);
	

}
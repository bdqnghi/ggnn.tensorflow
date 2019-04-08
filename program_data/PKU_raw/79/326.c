void f(int n,int m)
{
	int i,k=0,t=0,a[300],*p;for(i=0;i<300;i++) a[i]=i+1;
    p=a;	
	i=0;
	while(t<n-1)
	{
		if(*(p+i)!=0) k++;
		if(k==m) {*(p+i)=0;t++;k=0;}
		i++;
		if(i==n) i=0;
	}
	while(*p==0) p++;
	printf("%d\n",*p);k=0;t=0;
}
void main()
{
	int n,m;
	
	for(;;)
	{
	scanf("%d%d",&n,&m);if(n==0)break;
	f(n,m);
	}
}
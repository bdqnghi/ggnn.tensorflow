void move(int a[],int *p,int n,int m)
{
	for(p=a;p<a+n-m;p++)
	    *(p+n)=*p;
	for(p=a+n-m;p<a+n;p++)
		*(p-n+m)=*p;
	for(p=a+n;p<a+2*n-m;p++)
		*(p-n+m)=*p;
}
int main()
{
	int m,n,i;
	int a[100],*p;
	scanf("%d%d",&n,&m);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	p=a;
	move(a,p,n,m);
	for(p=a;p<a+n;p++)
	{
		printf("%d",*p);
		if(p!=a+n-1)printf(" ");
	}
}

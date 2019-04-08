int digui(int m,int n)
{
	int p;
	if(m<n)
		p=digui(m,m);
	else
	{
		if(m==0||n==1)
		p=1;
		else p=(digui(m,n-1)+digui(m-n,n));
	}return(p);
}
void main()
{
	int m,n,t,i,a[20],b[20],c[20],p,q;
	scanf("%d",&t);
	for(i=0;i<t;i++)
	{
		scanf("%d%d",&b[i],&c[i]);
		p=b[i];q=c[i];
		a[i]=digui(p,q);
	}
	printf("%d",a[0]);
	if(t>=1)
	for(i=1;i<t;i++)
	printf("\n%d",a[i]);
}

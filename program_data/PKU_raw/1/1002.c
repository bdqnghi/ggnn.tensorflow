int f(int a,int b)
{
	int i,p,q;
	for(i=b,p=0;i<=sqrt(a);i++)
	{
        if(a%i==0) 
		{
			q=f(a/i,i);
			p=p+q;
		}
	}
	p++;
	return(p);
}
void main()
{
	int i,a,n,k;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		scanf("%d",&a);
		k=f(a,2);
		printf("%d\n",k);
	}

}
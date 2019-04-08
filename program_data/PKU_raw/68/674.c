int F(int);
void main()
{
	int i,n,f1,k,f2;
	scanf("%d",&n);
	for(k=6;k<=n;k=k+2)
		for(i=2;i<n;i++)
		{
			f1=F(i);
	        f2=F(k-i);
     		if(f1&&f2)
			{
	    		printf("%d=%d+%d\n",k,i,k-i);break;
			}
		}
}
int F(int t)
{
	int i,p=1;
	for(i=2;i<=sqrt(t);i++)
	{
		if(t%i==0)
		{
			p=0;break;
		}
	}
	return p;
}

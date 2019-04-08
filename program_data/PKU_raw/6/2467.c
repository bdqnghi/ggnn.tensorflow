int main()
{
	int c[10000],i,k,a,b,n,s=0;
	int *p,*q;
	p=c;q=p;
	scanf("%d",&n);
for(k=0;k<n;k++)
{
    p=c;q=p;s=0;
	scanf("%d %d",&b,&a);
    	
        for(i=0;i<a*b;i++)
	{
	
		  scanf("%d",&*p);
		  p++;
	}
	p=q;
	for(i=0;i<a;i++)
	{
		s=s+*p;
		p++;
	}
	p=q;
	for(i=0;i<b-2;i++)
	{
		p=p+a;
		s=s+*p;
		
	}
	p=q+a-1;
	for(i=0;i<b-2;i++)
	{
		p=p+a;
		s=s+*p;
		
		
	}
	if(b!=1)
	{
	p=q+a*(b-1);
	for(i=0;i<a;i++)
	{
		
		s=s+*p;
		p=p+1;
		
	}
	}
	printf("%d\n",s);


}


}
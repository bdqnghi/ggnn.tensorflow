void main()
{
	int su(int x);
	int n,a,b,c,d,k;
	scanf("%d",&n);
	for(k=6;k<=n;k=k+2)
	{
	 for(a=2;a<k/2+1;a++)
	 {
		b=k-a;
		c=su(a);
		d=su(b);
		if(c==0&&d==0)break;
	 }
	 printf("%d=%d+%d\n",k,a,b);
	}

}

su(int x)
{
	int i,j=0,z;
	if(x==2)
		z=0;
	else
	{
		for(i=2;i<sqrt(x)+1;i++)
			if(x%i==0)
				j=j+1;
	    if(j==0)
			z=0;
		else
			z=1;
	   
	}
	return(z);
}
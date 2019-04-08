void main()
{
	int lanjie(int s[],int n,int m,int k);
	int k,i,s[25],n;
	scanf("%d",&k);
	for(i=0;i<k;i++)
		scanf("%d",&s[i]);
	n=lanjie(s,10000,0,k);
	printf("%d",n);
}
int lanjie(int a[25],int n,int m,int k)//n?????
{
	int c,b,z;
	if(m!=k-1)
	{
		if(n>=a[m])
		{
			c=lanjie(a,a[m],m+1,k)+1;
		    b=lanjie(a,n,m+1,k);
			if(c>b)
				z=c;
			else
				z=b;
		}
		else
			z=lanjie(a,n,m+1,k);
	}
	else
	{
		if(n>=a[m])
			z=1;
		else
			z=0;
	}
	return(z);

}
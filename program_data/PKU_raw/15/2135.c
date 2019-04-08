void main()
{
	int n,i,j,pi=0,pj,r=0,a;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		for(pj=0,j=0;j<n;j++)
		{
			scanf("%d",&a);
			if(a==0){pj++;r++;}
		}
		if(pj!=0)pi++;
	}
	printf("%d",(r/2-pi)*(pi-2));
}

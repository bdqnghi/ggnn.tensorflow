int huiwen(int m, int n);
main()
{	
	int m,n,k,i,p=0,tag=0;
	scanf("%d%d",&m,&n);
	int a, b=0;
	for(a=m;a<=n;a++)
	{
	b=huiwen(a,0);
	if(a==b)
   
	{
		k=sqrt(a);
	   for(i=2;i<=k;i++)
	   if(a%i==0)break;
		if(i>k)
		{	p++;
			if(tag==0)
			{
				printf("%d",a);
				tag=1;
			}
			else
		printf(",%d",a);}
	
		

	}}	if(p==0)
		printf("no");
}
	int huiwen(int a, int b)
{	if(a==0)
	return(b);
	else return(huiwen(a/10, b*10+a%10));
	}
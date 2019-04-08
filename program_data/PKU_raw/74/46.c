int z(int i);
int h(int i);

main()
{
	int m,n,i,r,t;
	 
	scanf("%d%d",&m,&n);
    
	r=0;
	
	for (i=m;i<=n;i++)
	   if (z(i)==1 && h(i)==1) 
	   {printf("%d",i);r=1;break;}

	for (t=i+1;t<=n;t++)
		if (z(t)==1 && h(t)==1)
			printf(",%d",t);
    
	if (r==0) 
	printf("no");
}

int z(int i)
{
	int r;
	for (r=2;r<=sqrt(i);r++)
		if (i%r==0)
			break;
     if (r<=sqrt(i)) return 0;
	 else return 1;
}

int h(int i)
{
	int y=0,k;
	k=i;
	while (i!=0)
	{
        y=10*y+i%10;
		i=i/10;
	}
   
	if (y==k) return 1;
	else return 0;
}
int f(int i)
{
	int c,k;
	if(i==2) c=1;
	else if(i%2==0) c=0;
	else if(i==3) c=1;
	else
	{
		k=3;
		while(k<=i-2&&i%k!=0)
			k=k+2;
		if(k==i) c=1;
		else c=0;
	}
	return c;
}
int g(int i)
{
	int num=0,c,t;
	t=i;
	while(i!=0)
	{
		num=num*10+i%10;
		i=(i-i%10)/10;
	}
	if(t==num)
		c=1;
	else c=0;
	return c;
}
void main()
{
	int m,n,num=0,i,l=0,b[300];
	scanf("%d%d",&m,&n);
	for(i=m;i<=n;i++)
	{
		if(f(i)*g(i)!=1)
		num++;
	   if(f(i)*g(i)==1) 
	   {  l++;
		   b[l]=i;
	   }
	 }
     if(num==n-m+1)
		printf("no");
	 else
	 {
		 for(i=1;i<=l-1;i++)
			 printf("%d,",b[i]);
		 printf("%d",b[l]);
	 }
	

	   
	
}
		
	
	


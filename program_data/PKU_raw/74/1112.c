void main()
{
	int huiwen (int a);
	int sushu (int t);
	int m,n,i,l=0,t;
	scanf("%d %d",&m,&n);
	
	for (i=m;i<=n;i++)
	{
		if ((huiwen (i))==1)
		{	if ((sushu (i))==1)
		      {printf("%d",i);
		       l++;
		        break;}
		}
	}

	if (l==0)
		printf("no");
		    
	
	for (t=i+1;t<=n;t++)
	{
		if ((huiwen (t))==1)
			if ((sushu (t))==1)
		      printf(",%d",t);
	
	}
}
    
    int huiwen (int a)
	{   int c=0,temp=a;
	    while (temp>0)
		{  c=c*10+temp%10;
		  temp=temp/10;}
			if (a==c)
			return (1);
		else
			return(0);
	}
	int sushu(int t)
	{   int i;
	   for (i=2;i<=sqrt(t);i++)
		   if (t%i==0)
			   break;
		   if (i>sqrt(t))
			   return(1);
		   else
			   return(0);
	}
		
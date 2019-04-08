void main()
{   int hw(int(c));
	int m,n,i,j,t;
	t=0;
	
	scanf("%d %d",&m,&n );
	for(i=m;i<=n;i++)
	{
	for(j=2;j<i;j++)
	{
	if(i%j==0)
	break;
	if(j>=i-1)
	if (hw(i))
	{
      
	  t=t+1;
	  if(t==1)
		  printf("%d",i);
	  else
		  printf(",%d",i);
	}
	
	}


	}
	
	
	
	
	if(t==0)
		printf("no");
}


int hw(int(c))
{
	int x,y;
	x=0;
	y=c;
	do
	{x=10*x+y%10;
	y=y/10;
	}
	while(y>0);
	if (x==c)
		return(1);
	else
		return(0);
}
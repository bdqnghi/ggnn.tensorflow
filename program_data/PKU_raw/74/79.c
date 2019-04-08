int sushu(int n)
{  
	      int i,a,z;
		   a=sqrt(n);
		  for(i=2;i<=a;i++)
		  {
		    if(n%i==0)
		  {
			  z=0;break; 
		  }
		  }
		if(i>a)
		{
			z=1; 
		}
		return(z);
}
int huiwen(int n)
{  int y,i,t,w=0,s=0;
    s=n;
    for(i=n;i>0;i=(i/10))
	{
		t=i%10;
		w=w*10+t;
	}
	if(w==s)
	{
		y=1;
	}
	else y=0;
	return(y);
}


void main()
{ 	int m,n,i,k,t,j=0,s=0;
	scanf("%d%d",&m,&n);
	for(i=m;i<=n;i++)
	{  
		 k=sushu(i);
		t=huiwen(i);
		if(k==1&&t==1)
		 s=s+1;
	}
     if(s==0)
		 printf("no");


		for(i=m;i<=n;i++)
	{
		k=sushu(i);
		t=huiwen(i);
		if(k==1&&t==1)
		{	printf("%d",i);break;}
		
	}
     for(j=i+1;j<=n;j++)
	{
		k=sushu(j);
		t=huiwen(j);
		if(k==1&&t==1)
			printf(",%d",j);
	 }
	 
}

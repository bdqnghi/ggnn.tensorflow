void main()
{
   int M,N,K,t,i;
   int num(int a,int b);
   scanf("%d",&t);
   for(i=1;i<=t;i++)
   {scanf("%d %d",&M,&N);
    K=num(M,N);
    printf("%d\n",K);
   }
}
int num(int a,int b)
{
	int z;
    if(b==1)
      z=1;
    if(a<=b)
	{
		if(a==1)    z=1;
		if(a==2)    z=2;
		if(a==3)	z=3;
		if(a==4)	z=5;
		if(a==5)	z=7;
		if(a==6)	z=11;
		if(a==7)	z=15;
		if(a==8)	z=22;
		if(a==9)	z=30;
	}
    if(a>b&&b!=1)
      z=num(a,b-1)+num(a-b,b);
    return(z);
}
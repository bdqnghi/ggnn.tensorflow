int huiwen(int a,int n)
{
if(a/10==0) return(n*10+a);
else return(huiwen(a/10,n*10+a%10));
}

main()
{
int a,b,j,flag1,flag2=0,i,k,h;
scanf("%d%d",&a,&b);
  for(i=a;i<=b;i++)
  {
	  flag1=1;
      k=sqrt(i);
    for(j=2;j<=k;j++)
	{
		if(i%j==0) flag1=0;
	}
    if(flag1) 
	{
		h=huiwen(i,0);
		if(h==i) 
		{
			if(flag2!=0) printf(",");
			printf("%d",i);
			
			flag2=1;
		}
	}
  }
  if(flag2==0) printf("no");
}

int main()
{
	int n,a,b,c,d,e,f;
	scanf("%d",&n);

	if(n>999)
	{a=n/1000;
	b=n-a*1000;
	c=b/100;
	d=b-c*100;
	e=d/10;
	f=d-e*10;

 printf("%d",f);
  printf("%d",e);
   printf("%d",c);
   printf("%d",a);}
		
	if(n<1000&n>99)
	{a=n/100;
	b=n-a*100;
	c=b/10;
	d=b-c*10;

  printf("%d",d);
   printf("%d",c);
   printf("%d",a);}
		
	if(n<100&n>9)
	{a=n/10;
	b=n-a*10;

printf("%d",b);
   printf("%d",a);}
		
	if(n<10)
	{a=n/10;

printf("%d",n);
  }
	
	return 0;
}

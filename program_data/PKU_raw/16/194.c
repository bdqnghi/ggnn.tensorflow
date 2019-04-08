void main()
{
  int a,b,c,d,x;
  scanf("%d",&x);
  if(x==0)  printf("0");
  else if(x<=9)  printf("%d",x);
  else if(x<=99)
    {
      a=x%10;
	  b=(x-a)/10;
	  printf("%d%d",a,b);
    }
  else if(x<=999)
   {
     a=x%10;
	 b=((x-a)%100)/10;
	 c=(x-10*b-a)/100;
	 printf("%d%d%d",a,b,c);
   }
  else if(x<=9999)
  {
    a=x%10;
	b=((x-a)%100)/10;
	c=((x-10*b-a)/100)%10;
	d=(x-100*c-10*b-a)/1000;
	printf("%d%d%d%d",a,b,c,d);
  }
  else printf("00001");
  printf("\n");
}
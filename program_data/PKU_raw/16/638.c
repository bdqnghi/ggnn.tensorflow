int main()
{
  int a,b,c,d,e,f;
  scanf("%d",&a);
  if(a>=10000)
  { b=a%10;
    c=a%100-b;c=c/10;
	d=a%1000-10*c-b;d=d/100;
	e=a%10000-10*c-b-100*d;e=e/1000;
	f=a-10*c-b-100*d-1000*e;
  printf("%d%d%d%d%d",b,c,d,e,f);}
  else if(a>=1000)
	  { b=a%10;
    c=a%100-b;c=c/10;
	d=a%1000-10*c-b;d=d/100;
	e=a-10*c-b-100*d;e=e/1000;
	
  printf("%d%d%d%d",b,c,d,e);}
  else if(a>=100)
	  { b=a%10;
    c=a%100-b;c=c/10;
	d=a-10*c-b;d=d/100;

	
  printf("%d%d%d",b,c,d);}
 else if(a>=10)
	  { b=a%10;
    c=a%100-b;
	
	c=c/10;d=d/100;e=e/100;f=f/10000;
	
  printf("%d%d",b,c);}
  else 
printf("%d",a);
  return 0;
}

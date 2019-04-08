void main()
{
  int a,b,c,d,e,f,g,h,i,j,k,l,m,n;
  scanf("%d",&a);
  if(a>=0&&a<=9)
	  printf("%d",a);
  else if(a>=10&&a<=99)
  {b=a%10,c=a/10;
      putchar(b);
	  putchar(c);}
  else if(a>=100&&a<=999)
  {d=a%10,e=a/10,f=e%10,g=e/10;   
  printf("%d%d%d",d,f,g);}
  else if(a>=1000&&a<=9999)
  {h=a/10,i=h/10,j=i/10,k=i%10,l=h%10,m=a%10;
  printf("%d%d%d%d",m,l,k,j);}
}
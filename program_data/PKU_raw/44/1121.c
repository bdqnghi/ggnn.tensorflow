void main()
{
  int reverse(int num);
  int a[6];
  int i;
  for(i=0;i<6;i++)
  scanf("%d",&a[i]);
  for(i=0;i<6;i++)
  reverse(a[i]);
}
int reverse(int num)
{
  int z,b,h,n,t,m,l;
  b=abs(num);
  if(b>=0&&b<10)
  z=b;
  else if(b>=10&&b<100)
  {
    l=b/10;
    n=b-l*10;
    z=n*10+l;
  }
  else if(b>=100&&b<1000)
  {
     h=b/100;
     l=(b-h*100)/10;
     n=b-h*100-l*10;
     z=n*100+l*10+h;
  }
  else if(b>=1000&&b<10000)
  {
     t=b/1000;
     h=(b-t*1000)/100;
     l=(b-t*1000-h*100)/10;
     n=b-t*1000-h*100-l*10;
     z=n*1000+l*100+h*10+t;
  }
  else 
  {
    m=b/10000;
    t=(b-m*10000)/1000;
    h=(b-m*10000-t*1000)/100;
    l=(b-m*10000-t*1000-l*100)/10;
    n=b-m*10000-t*1000-h*100-l*10;
    z=n*10000+l*1000+h*100+t*10+m;
  }
  if(num>=0) z=z;
  else z=-z;
  printf("%d\n",z);
  return(z);
}

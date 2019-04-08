int main(int argc, char* argv[])
{
   int i,n,a[6][2];
   int reverse(int n);
   for(i=0;i<6;i++){
        scanf("%d",&n);
a[i][0]=n;
   }
   for(i=0;i<6;i++){
        a[i][1]=reverse(a[i][0]);
   }
   for(i=0;i<6;i++){
        printf("%d\n",a[i][1]);
   }
   return 0;
}
int reverse(int n)
{
  int a,b,c,d,e;
  if(n>=-9&&n<=9){
  return (n);}
  if(n>=10&&n<=99){
  a=n/10;
  b=n%10;
  return(a+b*10);
  }
  if(n>=-99&&n<=-10){
      a=(-n)/10;
  b=(-n)%10;
  return(-(a+b*10));
  }
  if(n>=100&&n<=999){
  a=n/100;
  b=(n-100*a)/10;
  c=n%10;
  return(c*100+b*10+a);
  }
  if(n>=-999&&n<=-100){
      a=(-n)/100;
  b=((-n)-100*a)/10;
  c=(-n)%10;
  return(-(c*100+b*10+a));
  }
  if(n>=1000&&n<=9999){
  a=n/1000;
  b=(n-1000*a)/100;
  c=(n-1000*a-100*b)/10;
  d=n%10;
  return(d*1000+c*100+b*10+a);
  }
  if(n>=-9999&&n<=-1000){
  n=abs(n);
      a=n/1000;
  b=(n-1000*a)/100;
  c=(n-1000*a-100*b)/10;
  d=n%10;  
      return(-(d*1000+c*100+b*10+a));
  }
  if(n>=10000&&n<=99999){
      a=n/10000;
  b=(n-10000*a)/1000;
  c=(n-10000*a-1000*b)/100;
  d=(n-10000*a-1000*b-100*c)/10;
  e=n%10;
  return(e*10000+d*1000+c*100+b*10+a);
  }
   if(n>=-99999&&n<=-10000){
      a=(-n)/10000;
  b=((-n)-10000*a)/1000;
  c=((-n)-10000*a-1000*b)/100;
  d=((-n)-10000*a-1000*b-100*c)/10;
  e=(-n)%10;
  return(-(10000*e+1000*d+100*c+10*b+a));
  }
  
}
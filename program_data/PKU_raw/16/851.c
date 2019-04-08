int main()
{ 
int a,b,c,d,e,f,h,i,j,n;
 
 scanf("%d",&a);
    
 
 if(a>=10000)
 {
        b=a/10000;
  c=a-b*10000;
  d=c/1000;
  e=c-d*1000;
  f=e/100;
  h=e-f*100;
  j=h/10;
  i=h-j*10;
                n=10000*i+1000*j+100*f+10*d+b;

  printf("%05d",n);
 }
 else if(a>=1000)
 {
  b=a/1000;
  c=a-b*1000;
  d=c/100;
  e=c-d*100;
  f=e/10;
  h=e-f*10;
                n=1000*h+100*f+10*d+b;
  printf("%04d",n);
 }
 else if(a>=100)
 {
  b=a/100;
  c=a-b*100;
  d=c/10;
  e=c-10*d;
                n=100*e+10*d+b;
  printf("%03d",n);
 }
 else if(a>=10)
 {
  b=a/10;
  c=a-b*10;
                n=10*c+b;
  printf("%02d",n);
 }
 else if(a>=0)
  printf("%d",a);
 printf("\n");
 return 0;
}
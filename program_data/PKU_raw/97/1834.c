int main(){
 int n,i=0;
 int a=0,b=0,c=0,d=0,e=0,f=0;
 scanf("%d",&n);
  a=n/100;
  i=n-a*100;
  b=i/50;
  i=i-b*50;
  c=i/20;
  i=i-c*20;
  d=i/10;
  i=i-d*10;
  e=i/5;
  f=i-e*5;

printf("%d\n%d\n%d\n%d\n%d\n%d\n",a,b,c,d,e,f);
 return 0;
} 


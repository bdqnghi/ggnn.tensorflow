

main() {
   int n;
   int a,b,c,i;
   int t=0;
   scanf("%d",&n);
   for(i=1;i<=n;i++) {
if(i%7==0) a=0;
else                    
{
a=i;
b=(int)(i/10);
if(b==7)a=0;
else 
  {
a=i;
c=i-b*10;
if(c==7)a=0;
else a=i;
  }
}
t=t+a*a;              }
printf("%d",t);
}

void main()
{
 int n,a,b,sum=0,i=1;
 scanf("%d",&n);
 for(;n>0;n--)
 {
 if(n%7!=0)
 {
        b=n;
  while(b>=1)
  {
   a=b%10;
   b=(b-a)/10;
   if(a==7)
    i=0;
   }    
    if(i==1)
          sum+=n*n;
    i=1;
 }
 }
 printf("%d",sum);
}

 
int main()
{
 int a,b,c,d,e;
 scanf("%d",&a);
if(a==0) printf("0");
else
{
b=a/1000;
 c=(a%1000)/100;
 d=(a%100)/10;
 e=a%10;
 a=b+10*c+100*d+1000*e;
 if((a%10)==0) 
  {
   a=a/10;
   if((a%10)==0) 
    {
     a=a/10;
      if((a%10)==0) a=a/10;
    }
   }
if(e==0) 
{
   printf("%d",e);
   if(d==0)
    { 
      printf("%d",d);
      if(c==0) 
     printf("%d",c);
      }
} 
 printf("%d",a);
}
 return 0;
}
 
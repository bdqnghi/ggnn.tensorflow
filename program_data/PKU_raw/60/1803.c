main()
{
int a,b,c,d,e,f;
scanf("%d",&a);
if(a<5)
 printf("empty");
for(b=3;b<=a-2;b=b+2)
  {
   for(c=2;c<=b;c++)
   {
    d=b%c;
     if (d==0) break;                
   }                     
    for(e=2;e<=b+2;e++)
    {
    f=(b+2)%e;
     if (f==0) break;    
    }  
   if(c==b)
   {if(e==(b+2))
   printf("%d %d\n",b,b+2);
  }}  
  }

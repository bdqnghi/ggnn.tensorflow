int main()
{
 int a,b,c,d,e,f;
 scanf("%d",&a);
 if (a/10==0)
  printf("%d",a);
 else
  if (a/100==0)
  {
   b=a%10;
   c=a/10;
   d=10*b+c;
    if (b==0)
     printf("0%d",d);
    else
     printf("%d",d);
  }
  else
   if (a/1000==0)
   {
    b=a%10;
    c=a/100;
    d=a/10-10*c;
    e=100*b+10*d+c;
     if (b==0)
      if (d==0)
       printf("00%d",e);
      else
       printf("0%d",e);
     else
     printf("%d",e);
   }
   else
    if (a/10000==0)
    {
     b=a%10;
     c=a/1000;
     d=a/100-10*c;
     e=a/10-10*d-100*c;
     f=1000*b+100*e+10*d+c;
     if (b==0)
      if (e==0)
       if (d==0)
        printf("000%d",f);
       else
        printf("00%d",f);
      else
       printf("0%d",f);
     else
      printf("%d",f);
    }
    else
     printf("00001");
 return 0;
}

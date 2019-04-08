int main()
{
 int a,b,i;
 scanf("%d",&a);
 b=a%10;
 printf("%d",b);
 a=a/10;
 if (a!=0)
  {
    b=a%10;
    printf("%d",b);
    a=a/10;
     if (a!=0)
      {
        b=a%10;
        printf("%d",b);
        a=a/10;
         if (a!=0)
          {
            b=a%10;
            printf("%d",b);
            a=a/10;
             if (a!=0)
             {
              b=a%10;
              printf("%d",b);
              a=a/10;
              }
           }
      }
    }
 return 0;
}
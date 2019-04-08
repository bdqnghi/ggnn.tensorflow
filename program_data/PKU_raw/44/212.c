int reverse(int num)
{
    int a=0;
    if(num>0)
   { do
    {
    a=a*10+num%10;
    num=num/10;
    }
    while(num!=0);
    } 
    if(num<0)
   {   num=num*(-1);
    do
    { a=a*10+num%10;
    num=num/10;
    }
    while(num!=0);
    a=a*(-1);
    }
    return a;
}
main()
{
      int a[6],b[6];
      int i;
       for(i=0;i<6;i++)
       {
         scanf("%d",&a[i]);
         b[i]=reverse(a[i]);
         }
       for(i=0;i<6;i++)
       printf("%d\n",b[i]);
       getchar();
       getchar();
}

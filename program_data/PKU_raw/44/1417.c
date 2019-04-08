int reverse(int n)
{
    int i,j,s,a[20],t=0;
    if(n>=0)
         s=n;
    else
         s=-n;
    for(i=0;s!=0;i++)
    {
          a[i]=s%10;
          s=(s-a[i])/10;
    }
    for(j=0;j<i;j++)
    {
          t=10*t+a[j];
    }
    if(n<0)
         return -t;
    else
         return t;
}
main()
{
      int i,c[6];
      for(i=0;i<6;i++)
      {
             scanf("%d",&c[i]);
             printf("%d\n",reverse(c[i]));
      }
}   
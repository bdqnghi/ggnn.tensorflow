int reverse(int a);
int R(int a);
main()
{
      int i,j,k;
      for(i=1;i<=6;i++)
      {
          scanf("%d",&j);
          k=reverse(j);
          printf("%d\n",k);
      }
}
int R(int a)
{
    int i,b,c=0;
    for(i=1;a>0;i++)
    {
       b=a%10;
       c=c*10+b;
       a=a/10;
     }
    return(c);
}
int reverse(int a)
{
    int c;
    if (a>0)
    c=R(a);
    else if (a<0)
    c=-R(-a);
    else
    c=0;
    return(c);
}

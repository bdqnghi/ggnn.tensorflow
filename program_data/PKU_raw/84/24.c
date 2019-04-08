void main()
{
    int n,i,a,b,c,m,t,r,k;
    scanf("%d\n",&n);
    scanf("%d\n%d\n",&a,&b);
    if(a<b)
      { t=a;a=b;b=t;}
    for(i=1;i<=n-2;i++)
     {
       scanf("%d\n",&c);
       if(c>=a)
        { r=a,a=c,c=r;
          k=c;c=b;b=k;}
      else if(c>=b)
        { t=b;b=c;c=t;}
     }
    printf("%d\n%d\n",a,b);
}

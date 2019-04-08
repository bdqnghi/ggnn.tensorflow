int reverse(int num)
{   int a[11],i,j,flag,n;
    if (num==0) return 0;
    else if (num<0) flag=-1;
    else flag=1;
    num=abs(num);
    for (i=0;i<=10;i++) a[i]=0;
    i=0;
    while (num>0)
    {
      a[i]=num%10;
      num=num/10;
      i++;}
    i--;
    n=0;
    for (j=0;j<=i;j++)
    n=n*10+a[j];
    if (flag<0) return(-n);
    else return(n);
}    
main()
{    
      int i,num;
      for (i=0;i<6;i++)
      { scanf("%d",&num);
        num=reverse(num);
        printf("%d\n",num);
       }
}
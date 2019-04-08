int cifang(int n)
{   
    int t=1,i;
    if(n==0)
    return t;
    else
    {
    for(i=n;i>0;i--)
    t=t*10;
    return t;
    }
}
int reverse(int num)
{
    int i,j,count=0,t,total=0;
    int a[500],b[500];

    for(i=0;;i++)
    {
                 t=0;
                 t=num%cifang(i+1);
                 a[i]=t/cifang(i);
                 count++;
                 num=num-a[i]*cifang(i);
                 if(num==0) break;
    }
    
    for(i=0;i<count;i++)
    total=total+a[i]*cifang(count-i-1);
    if(total==-0)
    return total=0;
    else
    return total;
}
main()
{
      for(int i=6;i>0;i--)
      {
      int n;
      scanf("%d",&n);
      reverse(n);
     printf("%d\n",reverse(n));
     }
      getchar();
      getchar();
}
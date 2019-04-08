int cifang(int n)
{
    int i,t=1;
    for(i=0;i<n;i++)
    t=t*10;
    return t;
}    
int reverse(int num)
{
    int i,j,k,count=0;
    int a[100];
    for(i=0;i<100;i++)
    a[i]=0;
    for(i=0;num!=0;i++)
    {
    a[i]=(num%cifang(i+1))/cifang(i);
    num=num-a[i]*cifang(i);
    count++;
    }
    int total=0;
    for(i=0;i<count;i++)
    {
    total=total+a[i]*cifang(count-i-1);
     }
     return total;
}
main()
{
      int k,i;
      for(i=6;i>0;i--)
      {
      scanf("%d",&k);
      printf("%d\n",reverse(k));
      }
      getchar();
      getchar();
}
      

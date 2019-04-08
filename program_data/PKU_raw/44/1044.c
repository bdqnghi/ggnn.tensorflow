int reverse(int num)
{
    int a[20],i,j,k=1,r=0,m=1;
    for(i=0;num%k!=num;i++)
    {
      k=k*10;
      a[i]=(num%k-num%(k/10))/(k/10);
    }
    for(j=0;j<i;j++)
    {
      m=m*10;
      r+=a[j]*(k/m);
    }
    return r;
}
main()
{
    int a[6],i;
    for(i=0;i<6;i++)
    {
      scanf("%d",&a[i]);
      if(a[i]==0)
        printf("0\n");
      else if(a[i]<0)
        printf("%d\n",reverse(a[i]*(-1))*(-1));
      else 
        printf("%d\n",reverse(a[i]));
    }
    getchar();
    getchar();
        
        
}
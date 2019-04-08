int reverse(int n)
{
    int temp=0,i=0,j;
    int a[100];
    while(n!=0)
    {
                  a[i]=n%10;
                  i++;
                  n/=10;
    }
    j=i;
    for(i=0;i<j;i++)
    {
                       temp=temp*10+a[i];
    }
    return temp;
}
main()
{
      int g,n;
      for(g=0;g<6;g++)
      {
                      scanf("%d",&n);
                      printf("%d\n",reverse(n));
      }
      
}

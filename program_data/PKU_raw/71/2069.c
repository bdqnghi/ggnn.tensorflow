int f(int a)
{
    if(a%400==0||(a%4)==0&&a%100!=0)
    return 1;
    else 
    return 2;
    
}
main()
{
      int n;
      scanf("%d",&n);
      int i;
      for(i=0;i<n;i++)
      {
                      int days[12]={31,28,31,30,31,30,31,31,30,31,30,31};
                      int m;
                      scanf("%d",&m);
                      if(f(m)==1)
                      days[1]=29;
                      
                      else
                      days[1]==28;
                      
                      int a,b;
                      scanf("%d %d",&a,&b);
                      int t;
                      if(a>b)
                      {
                             t=a;
                             a=b;
                             b=t;
                      }
                      int j;
                      int s=0;
                      for(j=a;j<b;j++)
                      {
                                      s+=days[j-1];
                      }
                      if(s%7==0)
                      printf("YES\n");
                      else
                      printf("NO\n");
      }
      getchar();
      getchar();
      getchar();
}

                      
                      
                                      
                      
                      
    

main()
{
      int a,i,j,n,f[30];
      f[0]=1;f[1]=1;
      scanf("%d",&n);
      for(i=0;i<n;i++)
      {
                      for(j=2;j<30;j++)f[j]=0;
                      scanf("%d",&a);
                      if(a<=2)printf("1\n");
                      else
                      {
                          for(j=2;j<a;j++)
                          {
                                          f[j]=f[j-1]+f[j-2];
                          }
                          printf("%d\n",f[a-1]);
                      }
      }
}
 
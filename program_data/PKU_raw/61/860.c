main()
{
      int n,i,a,j;
      scanf("%d",&n);
      for(i=0;i<n;i++)
      {
                      scanf("%d",&a);
                      int b[20]={0};
                      b[0]=1;
                      b[1]=1;
                      if(a<=2)
                      {
                                    printf("%d\n",b[a-1]);
                      }
                      else
                      {
                          for(j=2;j<a;j++)
                          {
                                          b[j]=b[j-1]+b[j-2];
                          }
                          printf("%d\n",b[a-1]);
                      }
      }                
      getchar();                
      getchar();                
      
}

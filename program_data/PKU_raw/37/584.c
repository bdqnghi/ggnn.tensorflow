main()
{
      int n,i,j,t,c,l;
      c=1;
      scanf("%d",&n);
      char a[100];
      for(i=0;i<n;i++)
      {
                      scanf("%s",&a);
                      l=strlen(a);
                      for(j=0;j<l;j++)
                      {
                                      for(t=0;t<l;t++)
                                      {
                                         if(a[t]==a[j]&&t!=j)
                                         break;
                                         if(t==l-1)
                                         {
                                         printf("%c\n",a[j]);
                                         c=0;
                                         }
                                         
                                      }
                                         if(c==0)
                                      {   
                                          c=1;
                                          break;
                                          }
                                         if(j==l-1)
                                         printf("no\n");
                      }
      }
      getchar();
      getchar();
}
int main()
{
    int hang,lie,sz[8][8],count=0,i,k,fz[8][8],max[8],min[8],e,f;
    scanf("%d,%d",&hang,&lie);
    for(i=0;i<hang;i++)
    {
                       for(k=0;k<lie;k++)
                       {
                                         scanf("%d",&sz[i][k]);
                                         fz[i][k]=sz[i][k];
                                         }
                                         }
   for(i=0;i<hang;i++)
   {
                      for(k=lie-1;k>0;k--)
                      {
                                          if(sz[i][k]>sz[i][k-1]) 
                                          {
                                          e=sz[i][k];
                                          sz[i][k]=sz[i][k-1];
                                          sz[i][k-1]=e;
                                          }
                      }
                      max[i]=sz[i][0];
   }
   for(k=0;k<lie;k++)
   {
                     for(i=hang-1;i>0;i--) 
                     {                     
                                          if(fz[i][k]<fz[i-1][k])
                                          {
                                           f=fz[i][k];
                                           fz[i][k]=fz[i-1][k];
                                           fz[i-1][k]=f;
                                           }
                     }
                     min[k]=fz[0][k];
   }
  for(i=0;i<hang;i++)
  {
                     for(k=0;k<lie;k++)
                     {
                                      if(max[i]==min[k])
                                      {
                                                        printf("%d+%d",i,k);
                                                        count=1;
                                      }
                     }
  }
  if(count==0) 
  {
             printf("No");
             }
   return 0;
}                                                                   
                                          
                                          
                                                           

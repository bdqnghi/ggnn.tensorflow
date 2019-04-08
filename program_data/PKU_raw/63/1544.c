

main()
{
      int x1,x2,y2,y1,a[100][100],b[100][100],c[100][100],i,k,j;
      scanf("%d %d",&x1,&y1);
      for(i=0;i<x1;i++)
      {
                       for(k=0;k<y1;k++)
                       {
                                        
                                        scanf("%d",&a[i][k]);
                                        
                                        }
                                        }
                                        
                                         scanf("%d %d",&x2,&y2);
                                        for(i=0;i<x2;i++)
      {
                       for(k=0;k<y2;k++)
                       {
                                        
                                        scanf("%d",&b[i][k]);
                                        
                                        }
                                        }
                                        
                                        for(i=0;i<x1;i++)
                                        {
                                                         for(k=0;k<y2;k++)
                                                         {
                                                                          c[i][k]=0;
                                                                          for(j=0;j<y1;j++)
                                                                          c[i][k]+=a[i][j]*b[j][k];
                                                                          if(k==0)
                                                                          printf("\n%d",c[i][k]);
                                                                          else
                                                                          printf(" %d",c[i][k]);
                                                                          }
                                                                          }
                                                                          
                                                                          
                                        
                                        
                                        }

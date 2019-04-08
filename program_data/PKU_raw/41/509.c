main()
{
      int a[5];
      for(a[0]=1;a[0]<=5;a[0]++)
          for(a[1]=1;a[1]<=5;a[1]++)
              for(a[2]=1;a[2]<=5;a[2]++)
                  for(a[3]=1;a[3]<=5;a[3]++)
                      for(a[4]=1;a[4]<=5;a[4]++)
                      {
                          if(a[0]==a[1]||a[0]==a[2]||a[0]==a[3]||a[0]==a[4]||a[1]==a[2]||a[1]==a[3]||a[1]==a[4]||a[2]==a[3]||a[2]==a[4]||a[3]==a[4])
                              continue;
                          if(a[4]==2||a[4]==3)
                              continue;
                          if(a[0]==1||a[0]==2)
                          {
                              if(a[4]!=1)
                                  continue;
                          }
                          else if(a[4]==1)
                              continue;
                          if(a[1]==1||a[1]==2)
                          {
                              if(a[1]!=2)
                                  continue;
                          }
                          else if(a[1]==2)
                              continue;        
                          if(a[2]==1||a[2]==2)
                          {
                              if(a[0]!=5)
                                  continue;
                          }
                          else if(a[0]==5)
                              continue;
                          if(a[3]==1||a[3]==2)
                          {
                              if(a[2]==1)
                                  continue;
                          }
                          else if(a[2]!=1)
                              continue;
                          if(a[4]==1||a[4]==2)
                          {
                              if(a[3]!=1)
                                  continue;
                          }
                          else if(a[3]==1)
                              continue;
                          printf("%d %d %d %d %d",a[0],a[1],a[2],a[3],a[4]);
                          break;
                      }
      getchar();
      getchar();
}

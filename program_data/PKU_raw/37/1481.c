main()
{
      int t,i,x,j,r;
      int k=0;
      char a[100000];
      scanf("%d",&t);
      for(i=0;i<t;i++)
      {
                      scanf("%s",a);
                      x=strlen(a);
                      for(j=0;j<x;j++)
                      {
                                      if(j==0)
                                      for(r=1;r<x;r++)
                                      {
                                                      if(a[r]==a[j])
                                                      break;
                                      }
                                      else
                                      
                          for(r=0;r<x;r++) 
                          {
                                             if(a[j]==a[r]&&j!=r)
                                             
                                                          
                                             break;
                                             
                          }
                          
                                     if(r==x)
                                     {
                                     printf("%c\n",a[j]);
                      k++;
                      break;
                      }
                      }
                      if(k==0)
                      printf("no\n");
                      else
                      k=0;
      }
      
      }
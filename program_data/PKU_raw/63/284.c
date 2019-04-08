

int main()
{
    int x1,y1,x2,y2,a[100][100],b[100][100],i,j,q,c[100][100];
    cin>>x1>>y1;
    for(i=0;i<=x1-1;i++)
    {
                      for(j=0;j<=y1-1;j++)
                      {
                                        cin>>a[i][j];
                                        /*????A[m][q]*B[q][n], 
????????C[m][n]?????C?????? 
C[i][j] = A[i][0]*B[0][j] + A[i][1]*B[1][j] + ..... + A[i][q]*B[q][j] */

                                        }
                                        }
                                        cin>>x2>>y2;
                                        for(i=0;i<=x2-1;i++)
                                        {
                                                          for(j=0;j<=y2-1;j++)
                                                          {
                                                                            cin>>b[i][j];
                                                                            }
                                                                            }
               for(i=0;i<=x1-1;i++)
     {
                       for(j=0;j<=y2-1;j++)
                       {
                                           c[i][j]=0;
                                           }
                                           }                                                              
                                                                            
                                                                            
     for(i=0;i<=x1-1;i++)
     {
                       for(j=0;j<=y2-1;j++)
                       {
                       for(q=0;q<=y1-1;q++)
                       {
                                           c[i][j]=c[i][j]+a[i][q]*b[q][j];
                                           }
                                           }
                                           }
                                           
               for(i=0;i<=x1-1;i++)
     {             if(y2!=1)
                   
                   
                  { cout<<c[i][0];
                       for(j=1;j<=y2-1;j++)
                       {                  
                                           cout<<" "<<c[i][j];
                                           if(j==y2-1)
                                           {
                                                      cout<<endl;
                                                      }
                                                      }
                                                      }
                                                      else
                                                      {
                                                          cout<<c[i][0]<<endl;
                                                          }
                                                          }
                                                                                   
                                                                            
                                                                            
                                                                            
                                                                            
                                                                            
    
    
    
    return 0;
}

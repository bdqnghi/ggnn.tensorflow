main()
{
      int n,l;
      scanf("%d",&n);
      double a[100][5],b[100][6];
      
      for(l=0;l<=n-1;l++)
      {
                         scanf("%lf %lf %lf",&a[l][0],&a[l][1],&a[l][2]);
                         a[l][3]=a[l][1]*a[l][1]-4*a[l][0]*a[l][2];
                         if(a[l][3]>0)
                         {
                                b[l][0]=(-a[l][1] + sqrt(a[l][1]*a[l][1]-4*a[l][0]*a[l][2]))/(2*a[l][0]) ;
                         b[l][1]=(-a[l][1] - sqrt(a[l][1]*a[l][1]-4*a[l][0]*a[l][2]))/(2*a[l][0]) ;
                         }
                         else
                         {
                             if(a[l][3]==0)
                             {
                                    b[l][0]=-a[l][1]/(2*a[l][0]);
                                    }
                                    else
                                    {
                                        b[l][0]=-a[l][1]/(2*a[l][0]);
                                        if(b[l][0]==0)
                                        {b[l][0]=0;}
                                        b[l][1]=(sqrt(4*a[l][0]*a[l][2]-a[l][1]*a[l][1]))/(2*a[l][0]);
                                        }
                                        }
                                        }
                                        for(l=0;l<=n-1;l++)
                                        {
                                                            if(a[l][3]>0)
                                                            {
                                                                         printf("x1=%.5lf;x2=%.5lf\n",b[l][0], b[l][1]);
                                                                         }
                                                                         else
                                                                         {
                                                                             if(a[l][3]==0)
                                                                             {
                                                                                           printf("x1=x2=%.5lf\n", b[l][0]);
                                                                                           }
                                                                                           else
                                                                                           {
                                                                                               printf("x1=%.5lf+%.5lfi;x2=%.5lf-%.5lfi\n",b[l][0], b[l][1], b[l][0],b[l][1]);
                                                                                               }
                                                                                               }
                                                                                               }
                                                                                               getchar();
                                                                                                getchar();
                                                                                               }
                                                                                               
                                                           
                                        
                                    

                         

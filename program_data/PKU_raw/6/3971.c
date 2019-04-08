int main()
{
    int a[105][105];
    long m,n,k,z,sum,i,j;
    scanf("%d",&z);
    for(i=1;i<=z;i++)
    {sum=0;
                     scanf("%d %d",&m,&n);
                    if(m>=2&&n>=2)
                    { for(j=1;j<=m;j++)
                     {
                                      for(k=1;k<=n;k++)
                     {
                                      scanf("%d",&a[j][k]);
                                      }
                                      }
                                      for(k=1;k<=n;k++)
                                      sum=sum+a[1][k]+a[m][k];
                                      for(j=2;j<=m-1;j++)
                                      {
                                                         sum=sum+a[j][1]+a[j][n];
                                                         }
                                                         printf("%d\n",sum);
                                                         }
                                                      
                                                     else
                                                     {for(j=1;j<=m;j++)
                     {
                                      for(k=1;k<=n;k++)
                     {
                                      scanf("%d",&a[j][k]);
                                      }
                                      }for(j=1;j<=m;j++)
                                                     {for(k=1;k<=n;k++)
                                                     sum=sum+a[j][k];}
                                                     printf("%d\n",sum);}
                                                       
                                                       
                                                       }
                                                 //  if(k==9) printf("1\n");     
                                                         
                                                    getchar();getchar();    } 

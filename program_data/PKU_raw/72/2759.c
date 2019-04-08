int main(int argc, char* argv[])
{   
    int m,n,a[30][30],i,j;
    scanf ("%d%d",&m,&n);
    for (i=0;i<m;i++)
    {
        for (j=0;j<n;j++)
        {
            scanf ("%d",&a[i][j]);
            }
            }
          
            for (i=0;i<m;i++)
            {
                for (j=0;j<n;j++)
                {
                    if (i==0)
                    {
                     if (j==0&&a[0][0]>=a[0][1]&&a[0][0]>=a[1][0])
                       printf ("0 0\n");
                     if (j<n-1&&j>0)
                     {
                          if (a[0][j]>=a[0][j+1]&&a[0][j]>=a[0][j-1]&&a[0][j]>=a[1][j])
                          printf ("0 %d\n",j);
                          }
                      if (j==n-1)
                     {
                          if (a[0][j]>=a[0][j-1]&&a[0][j]>=a[1][j])
                          printf ("0 %d\n",j);
                          }
                          }
                if (i<(m-1)&&i>=1)
                    {
                       if (j==0)
                       {
                               if (a[i][j]>=a[i][j+1]&&a[i][j]>=a[i-1][j]&&a[i][j]>=a[i+1][j]) 
                               printf ("%d %d\n",i,j);
                               }
                      if (j<n-1&&j>0)
                       {
                            if (a[i][j]>=a[i][j+1]&&a[i][j]>=a[i-1][j]&&a[i][j]>=a[i+1][j]&&a[i][j]>=a[i][j-1])
                            printf ("%d %d\n",i,j);
                            }
                       if (j==n-1)
                       {
                                 if (a[i][j]>=a[i][j-1]&&a[i][j]>=a[i-1][j]&&a[i][j]>=a[i+1][j])
                                 printf ("%d %d\n",i,j);
                                 }
                                 }
                    if (i==(m-1))
                    {
                       if (j==0)
                       {
                               if (a[i][j]>=a[i][j+1]&&a[i][j]>=a[i-1][j])
                               printf ("%d %d\n",i,j);
                               }
                       if (j>0&&j<n-1)
                       {
                               if (a[i][j]>=a[i][j+1]&&a[i][j]>=a[i][j-1]&&a[i][j]>=a[i-1][j])
                                printf ("%d %d\n",i,j);
                                }
                       if (j==(n-1))
                       {
                                  if (a[i][j]>=a[i][j-1]&&a[i][j]>=a[i-1][j])
                                  printf ("%d %d\n",i,j);
                                  }
                                  }
                                  }
                                  }
                                  scanf ("%d",&i);
                                  return 0;
                                  }

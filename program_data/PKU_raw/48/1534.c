int main()
{
    int m,n;
    scanf("%d %d",&m,&n);
    int germ[11][11]={0};
    int a[11][11]={0};
    int i,j,k,x;
    germ[5][5]=m;
    a[5][5]=m;
    for(k=0;k<n;k++)
    {
                    for(i=1;i<10;i++)
                    {
                                    for(j=1;j<10;j++)
                                    {
                                                    if(a[i][j]!=0)
                                                    {
                                                                  
                                                                  germ[i-1][j-1]+=a[i][j];
                                                                  germ[i-1][j]+=a[i][j];
                                                                  germ[i-1][j+1]+=a[i][j];
                                                                  germ[i][j-1]+=a[i][j];
                                                                  germ[i][j+1]+=a[i][j];
                                                                  germ[i+1][j-1]+=a[i][j];
                                                                  germ[i+1][j]+=a[i][j];
                                                                  germ[i+1][j+1]+=a[i][j];
                                                                  germ[i][j]+=a[i][j];              
                                                    }              
                                    }                
                    }
                    for(i=0;i<11;i++)
                    {
                                     for(j=0;j<11;j++)
                                     {
                                                      a[i][j]=germ[i][j];                        
                                     }                 
                    }
    }
    for(i=1;i<10;i++)
    {
                    for(j=1;j<9;j++)
                    {
                                    printf("%d ",germ[i][j]);                
                    }                
                    printf("%d\n",germ[i][9]);
    }

}

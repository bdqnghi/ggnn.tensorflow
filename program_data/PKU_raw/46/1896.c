int main ()
{
    int s[100][100];
    int row,col;
    int n=0,m=0,k;
    int a=0,b=1;
    int i,j;
    scanf ("%d %d", &row, &col);
    for (i=0;i<=row-1;i++)
    {
        for (j=0;j<=col-1;j++)
        {
            scanf ("%d", &s[i][j]);
        }
    }
    k=row*col;
    for (i=1;i<=k;i++)
    {
        printf ("%d\n", s[n][m]);
        if (n==b-1 && m<col-1)
        {
                    m=m+1;
        }
        else if (n<row-1 && m==col-1) 
             {
                         n=n+1;
             }
             else if (n==row-1 && m==col-1)
                  {
                               m=m-1;
                  }
                  else if (n==row-1 && m<col-1 && m>a)
                       {
                                    m=m-1;
                       }
                       else if (n==row-1 && m==a)
                            {
                                         n=n-1;
                                         
                            }
                            else if (n<row-1 && m==a && b<n)
                                 {
                                             n=n-1;
                                 }
                                 else if (n==b && m==a)
                                      {
                                               m=m+1;
                                               a=a+1;
                                               b=b+1;
                                               row=row-1;
                                               col=col-1;
                                       }  
    }
    
    return 0;
}
                    
                     
                    
                    
    
    

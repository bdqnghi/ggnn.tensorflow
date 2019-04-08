int main()
{
    int a[5][5];
    int i,j,p;
    int b,c,m=0;
    for(i=0;i<5;i++)
    {
                    for(j=0;j<5;j++)
                    {
                                    scanf("%d",&a[i][j]);
                    }
                    
    }
    for(i=0;i<5;i++)
    {
                    for(j=0;j<5;j++)
                    {
                                    b=1;
                                    c=1;
                                    for(p=0;p<j;p++)
                                    {
                                                    if(a[i][j]<a[i][p])
                                                    {
                                                                       b=0;
                                                    }
                                    }
                                    for(p=j+1;p<5;p++)
                                    {
                                                      if(a[i][j]<a[i][p])
                                                      {
                                                                         b=0;
                                                      }
                                    }
                                    for(p=0;p<i;p++)
                                    {
                                                    if(a[i][j]>a[p][j])
                                                    c=0;
                                    }
                                    for(p=i+1;p<5;p++)
                                    {
                                                      if(a[i][j]>a[p][j])
                                                      c=0;
                                    }
                                    if(b==1&&c==1)
                                    {
                                                  m=1;
                                         printf("%d %d %d\n",i+1,j+1,a[i][j]);
                                    }
                    }
    }
    if(m==0)
    printf("not found");
    return 0;
}                               
int main()
{
    int i,j,k,l,m,n,y,z,a[5][5],d;
    d=0;
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
                                    for(k=0;k<5;k++)
                                    {
                                                    if(j!=k&&a[i][j]<=a[i][k]) break;
                                    }
                                    if(k==5)
                                    {
                                            for(k=0;k<5;k++)
                                            {
                                                            if(i!=k&&a[i][j]>=a[k][j]) break;
                                            }
                                            if(k==5)
                                            {
                                                    printf("%d %d %d",i+1,j+1,a[i][j]);
                                                    d++;
                                            }
                                    }
                    }
    }
    if(d==0) printf("not found");

}


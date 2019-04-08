int main()
{
    int a[9][9],b[9][9],c[9][9];
    int i,j,m,n,k,p,q;
    for(i=0;i<9;i++)
    for(j=0;j<9;j++)
    {
                    a[i][j]=0;
                    b[i][j]=0;
                    c[i][j]=0;
    }
    scanf("%d %d",&m,&n);
    a[4][4]=m;
    for(k=0;k<n;k++)
    {
                    for(i=0;i<9;i++)
                    for(j=0;j<9;j++)
                    {
                     if(a[i][j]!=0)
                     {
                                   b[i][j]=b[i][j]+3*a[i][j];
                                   b[i][j-1]+=a[i][j];
                                    b[i-1][j]+=a[i][j];
                                  b[i-1][j-1]+=a[i][j];
                                  b[i-1][j+1]+=a[i][j];
                                    b[i][j+1]+=a[i][j];
                                   b[i+1][j]+=a[i][j];
                                   b[i+1][j+1]+=a[i][j];
                                   b[i+1][j-1]+=a[i][j];
                    }          
                    }
    
    for(p=0;p<9;p++)
    for(q=0;q<9;q++)
    {
                    a[p][q]=b[p][q]-a[p][q];
                    b[p][q]=0;
    }
    }
    for(i=0;i<9;i++)
    for(j=0;j<9;j++)
    {
                    if(j==8)
                    printf("%d\n",a[i][j]);
                    else printf("%d ",a[i][j]);
    }
}
                    
                    

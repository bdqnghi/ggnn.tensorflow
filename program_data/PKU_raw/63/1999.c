int main()
{
    int x1,x2,y1,y2,i,j,k,sum;
    int a[100][100],b[100][100],c[100][100];
    scanf("%d %d",&x1,&y1);
    for(i=0;i<x1;i++)
        for(j=0;j<y1;j++)
        scanf("%d",&a[i][j]);
    scanf("%d %d",&x2,&y2);
    for(i=0;i<x2;i++)
         for(j=0;j<y2;j++)
         scanf("%d",&b[i][j]);
         for(i=0;i<x1;i++)
           for(j=0;j<y2;j++)
           {
             for(k=0,sum=0;k<x2;k++)
             sum=sum+a[i][k]*b[k][j];
             c[i][j]=sum;
           }   
    for(i=0;i<x1;i++)
    {
        for(j=0;j<(y2-1);j++)
        printf("%d ",c[i][j]);
        printf("%d",c[i][j]);
        printf("\n");
    }   
   
}     
         
         
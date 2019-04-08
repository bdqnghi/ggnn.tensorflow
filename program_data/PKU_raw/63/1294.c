int main()
{
    int i,j,k,x1,y1,y2,a[101][101],b[101][101],c[101][101]={0};
    scanf("%d%d",&x1,&y1);
    for(i=0;i<x1;i++)
    {
                     for(j=0;j<y1;j++)
                     {scanf("%d",&a[i][j]);}  }
    scanf("%d%d",&y1,&y2);
    for(i=0;i<y1;i++)
    {
                     for(j=0;j<y2;j++)
                     {scanf("%d",&b[i][j]);}    }
    for(i=0;i<x1;i++)
    {
                     for(j=0;j<y2;j++)
                     {
                                      for(k=0;k<y1;k++)
                                      {c[i][j]=c[i][j]+a[i][k]*b[k][j];}         
                     }
    }
for(i=0;i<x1;i++)
{for(j=0;j<y2-1;j++)
printf("%d ",c[i][j]);
printf("%d",c[i][y2-1]);
printf("\n");}
return 0;
    }


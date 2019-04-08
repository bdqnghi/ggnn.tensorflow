int main()
{
    int x1,y1,x2,y2;
    int i,j,k;
    scanf("%d %d",&x1,&y1);
    int **p1=(int **)malloc(x1*sizeof(int *));
    for(i=0;i<x1;i++)
    p1[i]=(int *)malloc(y1*sizeof(int));
    for(i=0;i<x1;i++)
    {
                     for(j=0;j<y1;j++)
                     scanf("%d",&p1[i][j]);
    }
    scanf("%d %d",&x2,&y2);
    int **p2=(int **)malloc(x2*sizeof(int *));
    for(i=0;i<x2;i++)
    p2[i]=(int *)malloc(y2*sizeof(int));
    for(i=0;i<x2;i++)
    {
                     for(j=0;j<y2;j++)
                     scanf("%d",&p2[i][j]);
    }
    int **p3=(int **)malloc(x1*sizeof(int *));
    for(i=0;i<x1;i++)
    p3[i]=(int *)malloc(y2*sizeof(int));
    for(i=0;i<x1;i++)
    {
                     for(j=0;j<y2;j++)
                     {
                                      p3[i][j]=0;
                                      for(k=0;k<y1;k++)
                                      p3[i][j]=p3[i][j]+p1[i][k]*p2[k][j];
                                       if(j==y2-1)
                                      printf("%d\n",p3[i][j]);
                                      else
                                      printf("%d ",p3[i][j]);
                     }
    }
    return 0;
}



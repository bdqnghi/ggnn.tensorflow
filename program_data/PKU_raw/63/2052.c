int main()
{
    int x1,y1,x2,y2;
    int a[100][100],b[100][100];
    scanf("%d%d",&x1,&y1);
    for(int i=0;i<x1;i++)
        for (int j=0; j<y1; j++)
            scanf("%d",&a[i][j]);
    scanf("%d%d",&x2,&y2);
    for(int i=0;i<x2;i++)
        for (int j=0; j<y2; j++)
            scanf("%d",&b[i][j]);
    for(int i=0;i<x1;i++)
        for (int j=0; j<y2; j++)
        {
            int k1=0;
            for(int k=0;k<y1;k++ )
                k1+=a[i][k]*b[k][j];
            printf("%d",k1);
            if(j!=y2-1) printf(" ");
            else  printf("\n");
        }
}

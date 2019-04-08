int main()
{
    int x1,y1;
    scanf("%d %d",&x1,&y1);
    int **a;
    a=(int **)malloc(x1*sizeof(int *));
    for(int i=0;i<x1;i++)
    {
        a[i]=(int *)malloc(y1*sizeof(int));    
    }
    for(int i=0;i<=x1-1;i++)
    {
        for(int j=0;j<=y1-1;j++)
        {
            scanf("%d",&a[i][j]);    
        }    
    }
    int x2,y2;
    scanf("%d %d",&x2,&y2);
    int **b;
    b=(int **)malloc(x2*sizeof(int *));
    for(int i=0;i<x2;i++)
    {
        b[i]=(int *)malloc(y2*sizeof(int));    
    }
    for(int k=0;k<=x2-1;k++)
    {
        for(int l=0;l<=y2-1;l++)
        {
            scanf("%d",&b[k][l]);    
        }    
    }
    int **c;
    c=(int **)malloc(x1*sizeof(int *));
    for(int i=0;i<x1;i++)
    {
        c[i]=(int *)malloc(y2*sizeof(int));    
    }
    for(int m=0;m<=x1-1;m++)
    {  
        for(int n=0;n<=y2-1;n++)
        {
            c[m][n]=0;    
            for(int o=0;o<=x2-1;o++)
            {
                c[m][n]=c[m][n]+a[m][o]*b[o][n];   
            }        
        }    
    }
    for(int p=0;p<=x1-1;p++)
    {
        for(int q=0;q<=y2-2;q++)
        {
            printf("%d ",c[p][q]);    
        }    
        printf("%d\n",c[p][y2-1]);
    }
    for(int i=0;i<x1;i++)
    {
        free(a[i]);    
    }
    free(a);
    for(int i=0;i<x2;i++)
    {
        free(b[i]);    
    }
    free(b);
    for(int i=0;i<x1;i++)
    {
        free(c[i]);    
    }
    free(c);
    return 0;
} 
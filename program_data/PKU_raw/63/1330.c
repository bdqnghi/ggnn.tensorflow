int main()
{
    int x1,x2,y1,y2;
    scanf("%d %d",&x1,&y1);
    int a[100][100];
    for(int i=0;i<=x1-1;i++)
    {
        for(int j=0;j<=y1-1;j++)
        {
            scanf("%d",&a[i][j]);    
        }    
    }
    scanf("%d %d",&x2,&y2);
    int b[100][100];
    for(int k=0;k<=x2-1;k++)
    {
        for(int l=0;l<=y2-1;l++)
        {
            scanf("%d",&b[k][l]);    
        }    
    }
    int c[100][100];
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
    return 0;
} 
int main()
{
    int a[5][5];
    int b[5]={0};
    int c[5];
    int i,j,m,k;
    m=-1;
    for(i=0;i<=4;i++)
    {
        for(j=0;j<=4;j++)             
        {
             scanf("%d",&a[i][j])  ;                       
            c[j]=a[i][j]; 
            b[i]=a[i][j];                                         
        }             
    }
   for(i=0;i<=4;i++)
    {
        for(j=0;j<=4;j++)             
        {
            if(a[i][j]>b[i]) b[i]=a[i][j];                    
            if(a[i][j]<c[j]) c[j]=a[i][j];                                                 
        }             
    }
    for(i=0;i<=4;i++)
    {
        for(j=0;j<=4;j++)             
        {
            if(a[i][j]==b[i]&&a[i][j]==c[j]) 
             {
               m=i;
               k=j;
             }                                           
        }             
    }
    if(m==-1) printf("not found");
    else printf("%d %d %d",m+1,k+1,a[m][k]);
    return 0;
}
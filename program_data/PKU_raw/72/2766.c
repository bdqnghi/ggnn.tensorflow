
int main()
{
    int m,n;
    scanf("%d %d",&m,&n);
    int hei[m][n];//??
    int top[m][n];//?????
    
    int i,j;
    for(i=0;i<m;i=i+1)//????
    {
        for(j=0;j<n;j=j+1)
        {
            scanf("%d",&(hei[i][j]));
            top[i][j]=1;
        }
    }
    
    for(i=0;i<m;i=i+1)//???????
    {
        for(j=0;j<n;j=j+1)
        {
            if(i-1>=0 && hei[i-1][j]>hei[i][j]){top[i][j]=0;}
            else if(i+1<=m-1 && hei[i+1][j]>hei[i][j]){top[i][j]=0;}
            else if(j+1<=n-1 && hei[i][j+1]>hei[i][j]){top[i][j]=0;}
            else if(j-1>=0 && hei[i][j-1]>hei[i][j]){top[i][j]=0;}
        }
    }
    
    for(i=0;i<m;i=i+1)//???????????
    {
        for(j=0;j<n;j=j+1)
        {
            if(top[i][j]==1){printf("%d %d\n",i,j);}
        }
    }
    
    return(0);
    
}

int main()
{
    int n,i,j,x[hang][lie],s=0,x1,y1,x2,y2;
    scanf("%d",&n);
    n=n;
    
    for (i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
                        scanf("%d",&x[i][j]);
        }        
    }
    for (i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
                        if(x[i][j]==0&&x[i-1][j]==255&&x[i][j-1]==255&&x[i+1][j]==0&&x[i][j+1]==0)
                        {
                        x1=i;
                        y1=j;
                        }
                        else if (x[i][j]==0&&x[i-1][j]==0&&x[i][j-1]==0&&x[i+1][j]==255&&x[i][j+1]==255)
                        {
                        x2=i;
                        y2=j;
                        }
        }        
    }
    s=(x2-x1-1)*(y2-y1-1);
    printf("%d",s);
    return 0;
}
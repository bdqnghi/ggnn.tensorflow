
int main()
{
    int image[1000][1000];
    int n, i,j,area, begRow,begCol,endRow,endCol,isBreak;

    scanf("%d",&n);
    for(i=0;i<n;i++)
        for(j=0;j<n;j++)
        {
           scanf("%d", &image[i][j]);
        }

    isBreak = 0;
    for(i=0;i<n;i++){
        for(j=0;j<n;j++)
        {
           if(image[i][j]==0)
           {
              begRow = i; begCol = j; isBreak = 1; break;
           }
        }
        if( isBreak )  break;
    }

    for(i=begRow;i<n;i++)
    {
           if( i==(n-1) && image[i][begCol]==0) endRow = i;
           else if(image[i][begCol]!=0)
           {
              endRow = i-1; break;
           }
    }

    for(j=begCol;j<n;j++)
    {
           if( j==(n-1) && image[begRow][j]==0) endCol = i;
           else if(image[begRow][j]!=0)
           {
              endCol = j-1; break;
           }
    }

    area = (endRow - begRow - 1)*(endCol - begCol - 1);
    printf("%d", area);
}
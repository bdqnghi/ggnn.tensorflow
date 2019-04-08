
int main()
{
    int array[100][100],row,col,i,j,k,a,b,c,d;
    scanf("%d %d",&row,&col);
    for (i=0;i<row;i++)
    {
        for (j=0;j<col;j++)
        {
            scanf("%d",&(array[i][j]));
        }
    }
    for (k=0;k<row;k++)
    {   
        if (row-1-k-k==1&&col-1-k-k==1)
        {
            printf("%d\n%d\n%d\n%d\n",array[k][k],array[k][k+1],array[k+1][k+1],array[k+1][k]);
        break;
        }
        if (row-1-k-k==0&&col-1-k-k==0)
        {
            printf("%d",array[k][k]);
            break;
        }
        if (row-1-k-k==1&&col-1-k-k==0)
        {
            printf("%d\n%d\n",array[k][k],array[k+1][k]);
            break;
        }

        if (row-1-k-k==1&&col-1-k-k!=1)
        {
            for (i=k,j=k;j<col-1-k;j++)
            {
                printf("%d\n",array[i][j]);
            }
            for (i=k,j=col-1-k;i<row-1-k;i++)
            {
                printf("%d\n",array[i][j]);
            }
            for (i=row-1-k,j=col-1-k;j>k;j--)
            {
                printf("%d\n",array[i][j]);
            }
            break;
        }
        if (row-1-k-k==0)
        {
            for (i=k,j=k;j<=col-1-k;j++)
            {
                printf("%d\n",array[i][j]);
            }
            break;
        }
        if (col-1-k-k==1)
        {            
            for (i=k,j=k;j<col-1-k;j++)
            {
                printf("%d\n",array[i][j]);
            }
            for (i=k,j=col-1-k;i<row-1-k;i++)
            {
                printf("%d\n",array[i][j]);
            }
            for (i=row-1-k,j=col-1-k;j>k;j--)
            {
                printf("%d\n",array[i][j]);
            }
            for (i=row-1-k,j=k;i>k;i--)
            {
                printf("%d\n",array[i][j]);
             }
             break;
        }
        if (col-1-k-k==0)
        {
            for (i=k,j=col-1-k;i<=row-1-k;i++)
            {
                printf("%d\n",array[i][j]);
            }
            break;
        }                
        for (i=k,j=k;j<col-1-k;j++)
        {
            printf("%d\n",array[i][j]);
        }
        for (i=k,j=col-1-k;i<row-1-k;i++)
        {
            printf("%d\n",array[i][j]);
        }
        for (i=row-1-k,j=col-1-k;j>k;j--)
        {
            printf("%d\n",array[i][j]);
        }
        for (i=row-1-k,j=k;i>k;i--)
        {
            printf("%d\n",array[i][j]);
        }
     }
     return 0;
}

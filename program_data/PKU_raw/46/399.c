
int main(int argc, char *argv[])
{
    int x[100][100],i,j,k,n,col,row;
    scanf("%d""%d",&row,&col);
    for (i=0;i<row;i++)
    {
        for (j=0;j<col;j++)
        {
            scanf("%d",&x[i][j]);
        }
    }
    if (col>row)
        n=row;
    else if (col<row)
        n=col;
    else if (col==row)
        n=row;
    n=n/2-1;

    for (k=0;k<=n;k++)
    {
//the 1st we will try to output the num in row=0
    for (i=k,j=k;j<col-1-k;j++)//x[0][0]~x[0][col-2]
    {
        printf("%d\n",x[i][j]);
    }
//the 2nd output the num in  col=col-1
    for (i=k,j=col-1-k;i<row-1-k;i++)//x[0][col-1]~x[row-2][col-1]
    {
        printf("%d\n",x[i][j]);
    }

//the 3rd output the num in row=row-1
    for (i=row-1-k,j=col-1-k;j>k;j--)//x[row-1][col-1]~x[row-1][1]
    {
        printf("%d\n",x[i][j]);
    }

//the 4th outoput the num in col=0
    for (i=row-1-k,j=k;i>k;i--)//x[row-1][0]~x[1][0]
    {
        printf("%d\n",x[i][j]);
    }

    }
    if (col>row&&row%2==1)
    {
                                    k=row/2;
                                    for (i=k,j=k;j<=col-1-k;j++)
                                    {
                                        printf("%d\n",x[i][j]);
                                    }
    }
    else if (col<row&&col%2==1)
    {
                                    k=col/2;
                                    for (i=k,j=k;i<=row-1-k;i++)
                                    {
                                        printf("%d\n",x[i][j]);
                                    }
    }
    else if (col==row&&col%2==1&&row%2==1)
    {
                 k=col/2;
                 printf("%d\n",x[k][k]);
    }
    else k=k;
    

  return 0;
}



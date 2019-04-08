int u[1000][1000];
int main()
{
    int row,col,i,j,sum,k,m;
    scanf("%d%d",&row,&col);
    for(i=0;i<row;i++)
    {
	for(j=0;j<col;j++)
        {
	    scanf("%d",&u[i][j]);
	}
    }
    if(row>col)
    {
        m=col;
    }
    else 
    {
        m=row;
    }
	
    for(k=0;k<m;k++)
    {
        for(j=k;j<col-k;j++)
        {
	    printf("%d\n",u[k][j]);
        }
	if(k+1>=row-k)
        {				
            break;
	}
	
        for(i=k+1;i<row-k;i++)
        {
	    printf("%d\n",u[i][col-k-1]);
	}
	if(col-2-k<k)
        {
	    break;
	}

        for(j=col-2-k;j>=k;j--)
        {
	    printf("%d\n",u[row-k-1][j]);
	}
        if(row-2-k<=k)
        {
	    break;
	}

        for(i=row-2-k;i>k;i--)
        {
	    printf("%d\n",u[i][k]);
	}
				
    }
    return 0;	
}
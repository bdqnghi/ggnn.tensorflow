

int main()
{
    int t,i,j,n,k,a[5][9][9];

    scanf("%d%d",&n,&k);
    for(t=0;t<k+1;t++)
    {
         for(i=0;i<9;i++)
            {
                for(j=0;j<9;j++)
                    {
                        a[t][i][j]=0;
                    }
            }
    }
    a[0][4][4]=n;

    for(t=0;t<k;t++)
    {
          for(i=1;i<8;i++)
            {
                for(j=1;j<8;j++)
                    {
                        a[t+1][i][j]+=a[t][i][j]*2;
                        a[t+1][i+1][j]+=a[t][i][j];
                        a[t+1][i-1][j]+=a[t][i][j];
                        a[t+1][i+1][j+1]+=a[t][i][j];
                        a[t+1][i-1][j-1]+=a[t][i][j];
                        a[t+1][i][j+1]+=a[t][i][j];
                        a[t+1][i][j-1]+=a[t][i][j];
                        a[t+1][i+1][j-1]+=a[t][i][j];
                        a[t+1][i-1][j+1]+=a[t][i][j];
                    }
            }
    }

    for(i=0;i<9;i++)
    {
        for(j=0;j<9;j++)
        {
            printf("%d",a[k][i][j]);
            if(j!=8)
            {printf(" ");}
        }
        if(i!=8)
        {
            printf("\n");
        }
    }
  
    return 0;
}

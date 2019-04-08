int map[11][11][4],i,j,k;
main()
{   int m,n;
    memset(map,0,sizeof(map));
    scanf("%d %d",&m,&n);
    map[5][5][0]=m;
       for(k=1;k<=n;k++)
    {   for(i=1;i<10;i++)
            for(j=1;j<10;j++)
                {map[i][j][k]=2*map[i][j][k-1]+map[i-1][j-1][k-1]+map[i-1][j][k-1]+map[i-1][j+1][k-1]
                            +map[i][j-1][k-1]+map[i][j+1][k-1]+map[i+1][j-1][k-1]+map[i+1][j][k-1]+map[i+1][j+1][k-1];}
            }
    for(i=1;i<10;i++)
    {   for(j=1;j<10;j++)
            {if(j!=9)
                printf("%d ",map[i][j][n]);
             else
                printf("%d\n",map[i][j][n]);}
       
        }


    }

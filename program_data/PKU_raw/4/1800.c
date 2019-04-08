main()
{
      int row,col,time=0,n,i,j;
      int array[100][100];
      scanf("%d %d",&row,&col);
      for(i=0;i<row;i++)
      for(j=0;j<col;j++)
      scanf("%d",&array[i][j]);
      for(n=0;n<row+col;n++)
      {
                            if(col<row)
                            {
                                       if(n<col)
                                       {
                                                for(i=0;i<=n;i++)
                                                printf("%d\n",array[i][n-i]);
                                       }
                                       else if(n<row)
                                       {
                                            for(i=col-1;i>=0;i--)
                                            printf("%d\n",array[n-i][i]);
                                       }
                                       else 
                                       {
                                            for(i=col-1;i>n-row;i--)
                                            printf("%d\n",array[n-i][i]);
                                       }
                            }
                            else if(row<col)
                            {
                                       if(n<row)
                                       {
                                                for(i=0;i<=n;i++)
                                                printf("%d\n",array[i][n-i]);
                                       }
                                       else if(n<col)
                                       {
                                            for(i=0;i<=row-1;i++)
                                            printf("%d\n",array[i][n-i]);
                                       }
                                       else 
                                       {
                                            for(i=col-1;i>n-row;i--)
                                            printf("%d\n",array[n-i][i]);
                                       }
                            }
                            else if(row==col)
                            {
                                       if(n<row)
                                       {
                                                for(i=0;i<=n;i++)
                                                printf("%d\n",array[i][n-i]);
                                       }
                                       
                                       else 
                                       {
                                            for(i=row-1;i>n-col;i--)
                                            printf("%d\n",array[n-i][i]);
                                       }
                            }
      }
}     

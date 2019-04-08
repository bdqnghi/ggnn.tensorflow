int main()
{
    int a[110][110],row,col,i,j=0,k=0,geshu=0,zong;
    scanf("%d %d",&row,&col);
    zong=row*col;
    for(i=0;i<row;i++)
    {
                      for(j=0;j<col;j++)
                      {
                                        scanf("%d",&a[i][j]);
                      }
    }
    j=0;i=0;
    while(col>=1&&row>=1)
    {
                         if(geshu==zong) break;
                         for(j=k;j<col;j++)
                         {
                                           printf("%d\n",a[k][j]);
                                           geshu+=1;
                         }
                         if(geshu==zong) break;
                         for(i=k+1;i<=(row-1);i++)
                         {
                                           printf("%d\n",a[i][col-1]);
                                           geshu+=1;
                         }
                         if(geshu==zong) break;
                         for(j=col-2;j>=k;j--)
                         {
                                                printf("%d\n",a[row-1][j]);
                                                geshu+=1;
                         }
                         if(geshu==zong) break;
                         for(i=row-2;i>=(k+1);i--)
                         {
                                                 printf("%d\n",a[i][k]);
                                                 geshu+=1;
                         }
                         row-=1;
                         col-=1;
                         k+=1;
                         
    }
    return 0;
}
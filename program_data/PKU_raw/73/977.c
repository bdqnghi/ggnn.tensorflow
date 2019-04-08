int main()
{
          int i,j,h,x,c,a[5][5],b[5];
x=0;
          for(i=0;i<5;i++) scanf("%d %d %d %d %d",&a[i][0],&a[i][1],&a[i][2],&a[i][3],&a[i][4]);
          for(i=0;i<5;i++)
          {
                          for(j=0;j<5;j++)
                          {
                                          b[j]=a[i][j];
                          }
                          for(j=0;j<5;j++)
                          {
                                          for(h=0;h<4;h++)
                                          {
                                                          if(b[h]<=b[h+1])
                                                          {
                                                                         c=b[h];
                                                                         b[h]=b[h+1];
                                                                         b[h+1]=c;
                                                          };
                                          }
                          }
                          for(j=0;j<5;j++)
                          {
                                          if(a[i][j]==b[0])
                                          {
                                                           if(a[i][j]<=a[0][j]&&a[i][j]<=a[1][j]&&a[i][j]<=a[2][j]&&a[i][j]<=a[3][j]&&a[i][j]<=a[4][j]) 
                                                           {
                                                                                                                                                        printf("%d %d %d\n",i+1,j+1,a[i][j]);
                                                                                                                                                        x=100;
                                                           }
                                          }
                          }
          }
          if(x==0) printf("not found");
}

int main()
{
    int i,j,a[5][5],b[5][5]={0};
    int max,min,m=0;
    for(i=0;i<5;i++)
       for(j=0;j<5;j++)
          scanf("%d",&a[i][j]);
    for(i=0;i<5;i++)
    {
       m=0;
       max=a[i][0];
       for(j=1;j<5;j++)
       {
          if(a[i][j]>max)
          {
             m=j;
             max=a[i][m];
          }
       }
       b[i][m]++;
    }
    for(j=0;j<5;j++)
    {
       m=0;
       min=a[0][j];
       for(i=1;i<5;i++)
       {
          if(a[i][j]<min)
          {
             m=i;
             min=a[m][j];
          }
       }
       b[m][j]++;
    }
    m=0;
    for(i=0;i<5;i++)
       for(j=0;j<5;j++)
          if(b[i][j]==2)
          {
             printf("%d %d %d\n",i+1,j+1,a[i][j]);
             m++;
          }
    if(m==0)
       printf("not found");
}

int main()
{
    int row,col,a[8][8]={{0}};
    int i=0,j=0,k=0,c=0,d=0,max=0,locate=0;
    scanf("%d,%d",&row,&col);
    for(i=0;i<=row-1;i++)
     for(j=0;j<=col-1;j++)
      scanf("%d",&a[i][j]);
    for(i=0;i<=row-1;i++)
    {
     for(j=0;j<=col-1;j++)
     {
      if(max<a[i][j])
      {
       max=a[i][j];
       locate=i*10+j;
      }
     }
     for(k=0;k<=row-1;k++)
     {
      if(a[k][locate%10]>=max)
       c+=1;
     }
     if(c==row)
      printf("%d+%d",locate/10,locate%10);
     else
      d+=1;
     max=0;c=0;
    }
    if(d==row)
     printf("No");
}

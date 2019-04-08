int a[5][5];
int max(int i,int j)
{
    int s=0;
    for (int k=0;k<5;k++)
    {
        if (a[i][j]>=a[i][k])
        s++;
    }
    if (s==5) return 1;
    else return 0;
}
int min(int i,int j)
{
    int s=0;
    for (int k=0;k<5;k++)
    {
        if (a[i][j]<=a[k][j])
        s++;
    }
    if (s==5) return 1;
    else return 0;
}
main()
{
      for (int i=0;i<5;i++)
      for (int j=0;j<5;j++)
      scanf("%d",&a[i][j]);
      int s=0,I,J;
      for (int i=0;i<5;i++)
      for (int j=0;j<5;j++)
      if (max(i,j)==1 && min(i,j)==1)
      {s=a[i][j];I=i;J=j;}
      if (s!=0)
      printf("%d %d %d\n",I+1,J+1,s);
      else printf("not found\n");
}
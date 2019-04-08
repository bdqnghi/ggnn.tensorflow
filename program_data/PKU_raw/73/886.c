int a[6][6];//={0,1,1,1,1,1,0,11,3,5,6,9,0,12,4,7,8,10,0,10,5,6,9,11,0,8,6,4,7,2,0,15,10,11,20,25};
int max(int hang)
{
    int m=0,ji;
    for(int k=1;k<=5;k++)
    {
        if(a[hang][k]>m) {m=a[hang][k]; ji=k;}
    }
    return ji;
}
int min(int lie)
{
    int m=a[1][lie],ji=1;
    for(int k=2;k<=5;k++)
    {
        if(a[k][lie]<m) {m=a[k][lie]; ji=k;}
    }
    return ji;
}

main()
{
      int i,j,x=0;
      for(i=1;i<=5;i++)
      {
          for(j=1;j<=5;j++)
          {
              //printf("%d ",a[i][j]); 
              scanf("%d",&a[i][j]);
          }
          //printf("\n");
      }
      for(i=1;i<=5;i++)
      {
          j=max(i);
          if( min(j)==i ) {printf("%d %d %d\n",i,j,a[i][j]);x=1;}
      }
      if(x==0) printf("not found\n");
}
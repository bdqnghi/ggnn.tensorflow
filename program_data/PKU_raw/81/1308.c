
int main()
{
      int a[5][5];
      int i,j,k,s,p,n,m,temp=0;
      int panduan(int a[5][5],int n,int m);
      for(i=0;i<5;i++)
      {
          for(j=0;j<5;j++)
          {
              scanf("%d",&a[i][j]);
          }
      }
      scanf("%d%d",&n,&m);
      
      if(panduan(a,n,m))
      {
          
          for(s=0;s<4;s++)
          {
              printf("%d %d %d %d %d\n",a[s][0],a[s][1],a[s][2],a[s][3],a[s][4]);
              }
          printf("%d %d %d %d %d",a[4][0],a[4][1],a[4][2],a[4][3],a[4][4]);
      }
      else
      printf("error");
      
      getchar();
      getchar();
      
}

int panduan(int a[5][5],int n,int m)
{
    int k;
    int temp;
    if(n<5&&n>=0&&n!=m&&m>=0&&m<5)
    {
    for(k=0;k<5;k++)
          {
              temp=a[n][k];
              a[n][k]=a[m][k];
              a[m][k]=temp;
          }
    return(1);
    }
    else
    return(0);
}


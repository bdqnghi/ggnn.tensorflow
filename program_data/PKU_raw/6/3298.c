int main()
{   int sum(int x,int y); 
    int k,i,m,n;
    scanf("%d",&k);
    for(i=1;i<=k;i++)
    {scanf("%d %d",&m,&n);
    
      printf("%d\n", sum(m,n));
     }
     return 0;
}
    int sum(int x,int y )
  {   int b[100][100];
      int sum=0,i,j;
      for(i=0;i<x;i++)
      for(j=0;j<y;j++)
     scanf("%d",&b[i][j]);
      for(i=0;i<x;i++)
     for(j=0;j<y;j++)
     if(i==0||i==(x-1)||j==0||j==(y-1))
      sum=sum+b[i][j];
      return(sum);
} 
     
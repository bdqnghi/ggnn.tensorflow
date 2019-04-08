int main()
{
    int m,n,j,i;
    double x=2,y=1,a;
    double sum=0;
    scanf("%d",&m);
    for(i=0;i<m;i++){
      scanf("%d",&n);
      for(j=0;j<n;j++){
      sum=sum+x/y;
      a=x;
      x=a+y;
      y=a;
      }
      printf("%.3lf\n",sum);
      sum=0;
      x=2;
      y=1;
    }
    scanf("%d",&n);
    return 0;
}

int main()
{
  int m,n;
  double x;
 
  scanf("%d",&m);

  for(int i=1;i<=m;i++){
    scanf("%d",&n);  
    int sz[n+1];
    for(int j=0;j<n+1;j++){
      sz[j]=sz[j-1]+sz[j-2];
      sz[0]=1;
      sz[1]=2;
    }
    x=0;
    for(int j=1;j<n+1;j++){
      x+=1.0*sz[j]/sz[j-1];
    }
    printf("%.3lf\n",x);
  }
  return 0;
}

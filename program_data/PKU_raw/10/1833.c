int MAX(int a,int b)
{
    return (a>b?a:b);
}
int FIRE(int *h,int m,int i,int j)
{
    if(i==j) return m>=h[j];
    else if(m>=h[i]) return MAX(FIRE(h,m,i+1,j),FIRE(h,h[i],i+1,j)+1);
    else if(m<h[i]) return FIRE(h,m,i+1,j);
}
main()
{
      int n,i,j,h[26];
      scanf("%d",&n);
      for(i=1;i<=n;i++)
      scanf("%d",h+i);
      printf("%d",FIRE(h,65530,1,n));//????????65530? 
}
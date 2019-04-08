int main()
{
    int m,n;
    int j,i;
    double a,b,k;
    double s[100]={0};
    scanf("%d",&m);
    for(j=0;j<m;j++)
    { 
      scanf("%d",&n);             
      for(i=1,a=2,b=1.0;i<=n;i++) 
      {
        s[j]+=a/b;
        k=b;
        b=a;
        a+=k;
        } 
        
          
        printf("%.3lf\n",s[j]);
        }
    return 0;
}



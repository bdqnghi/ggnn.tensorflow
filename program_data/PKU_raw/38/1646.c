int main()
{
    int n,i;
    scanf("%d\n",&n);
    for(i=1;i<=n;i++){
       int m,k;
       scanf("%d\n",&m);
       double num[m];
       for(k=0;k<m;k++){
          scanf("%lf\n",&num[k]);
       }
       double p=num[0],q;
       for(k=1;k<m;k++){
          p=p+num[k];}
       q=p/m;
       double s=(num[0]-q)*(num[0]-q);
       double w;
       for(k=1;k<m;k++){
          s=s+(num[k]-q)*(num[k]-q);}
       w=sqrt(s/m);
       printf("%.5lf\n",w);}
    return 0;
}
      
          

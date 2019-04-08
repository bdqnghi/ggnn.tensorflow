int main(){
    int n,m;
    double aa[1000],x,a,y,bb[1000];
    cin>>n;
    int i,j;
    for(i=1;i<=n;i++){
      cin>>m;
      a=0;
      for(j=1;j<=m;j++){
       cin>>aa[j];
       a=a+aa[j];
       }
       a=a/m;
       y=0;
       for(j=1;j<=m;j++){
         y=y+(aa[j]-a)*(aa[j]-a);
         }
         y=y/m;
         y=sqrt(y);
        bb[i]=y;
        }
        for(i=1;i<=n;i++)
         printf("%.5lf\n", bb[i]);
     
        return 0;
        }        
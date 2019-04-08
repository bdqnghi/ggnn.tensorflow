int main(){
  int n,i,s,j,b;
  b=0;
  int x[11],y[11],z[11],a[46],c[46];
  double d[46];
  double t,f;
  scanf("%d",&n);
  for(i=0;i<n;i++){
     scanf("%d %d %d",&x[i],&y[i],&z[i]);
  }
  s=n*(n-1)/2;
  for(i=0;i<n;i++){
     for(j=i+1;j<n;j++){
        f=(x[i]-x[j])*(x[i]-x[j])+(y[i]-y[j])*(y[i]-y[j])+(z[i]-z[j])*(z[i]-z[j]);
        t=sqrt(f);
          d[b]=t;
          a[b]=i;
          c[b]=j;
          b++;
     }
  }
  for(int k=1;k<=s;k++){
     for(b=0;b<s-k;b++){
          if(d[b]>d[b+1]){
             double e=d[b+1];
             d[b+1]=d[b];
             d[b]=e;
             int g=a[b+1];
             a[b+1]=a[b];
             a[b]=g;
             int u=c[b+1];
             c[b+1]=c[b];
             c[b]=u;
          }else{
             if(d[b]==d[b+1]){
                 if(a[b]<a[b+1]){
                 double o=d[b+1];
                 d[b+1]=d[b];
                 d[b]=o;
                 int p=a[b+1];
                 a[b+1]=a[b];
                 a[b]=p;
                 int q=c[b+1];
                 c[b+1]=c[b];
                 c[b]=q;
                 }else{
                    if(a[b]==a[b+1]){
                       if(c[b]<c[b+1]){
                          double o=d[b+1];
                          d[b+1]=d[b];
                          d[b]=o;
                          int p=a[b+1];
                          a[b+1]=a[b];
                          a[b]=p;
                          int q=c[b+1];
                          c[b+1]=c[b];
                          c[b]=q;
                       }
                    }
                 }   
                 }
             }
          }   
      }
   for(b=s-1;b>=0;b--){
      printf("(%d,%d,%d)-(%d,%d,%d)=%.2lf\n",x[(a[b])],y[(a[b])],z[(a[b])],x[(c[b])],y[(c[b])],z[(c[b])],d[b]);
   }
   return 0;
   }

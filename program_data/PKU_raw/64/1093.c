int a[1000];
int b[1000];
int c[1000];
float sum[1000];
float dis[1000];
int x[1000];
int y[1000];
int main(){
  int n=0,d=0,i=0,r=0,l=0,f=0,k=0;
  float e=0;
  for(i=0;i<n;i++){
    sum[i]=0;
    dis[i]=0;
  }
 scanf("%d",&n);
  for(i=0;i<n;i++){
      scanf("%d %d %d ",&a[i],&b[i],&c[i]);
  }
  for(i=0;i<n-1;i++){
      for(r=i+1;r<n;r++){
          sum[l]=(a[i]-a[r])*(a[i]-a[r])+(b[i]-b[r])*(b[i]-b[r])+(c[i]-c[r])*(c[i]-c[r]);
          dis[l]=sqrt(sum[l]);
          x[l]=i;
          y[l]=r;
          l++;}
  }
  for(f=0;f<n*(n-1)/2;f++){
    for(d=0;d<n*(n-1)/2-1; d++){
            if(dis[d]<dis[d+1]){
                e=dis[d];
                dis[d]=dis[d+1];
                dis[d+1]=e;
                                k=x[d];
                                x[d]=x[d+1];
                                x[d+1]=k;
                                k=y[d];
                                y[d]=y[d+1];
                                y[d+1]=k;
            }
    }
   }
  for(f=0;f<n*(n-1)/2;f++){
printf("(%d,%d,%d)-(%d,%d,%d)=%.2lf\n",a[x[f]],b[x[f]],c[x[f]],a[y[f]],b[y[f]],c[y[f]],dis[f]);}
return 0;  
}
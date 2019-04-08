int main(){
    int n,g,p,w,u,v;
    double e;
    int a[10000],b[10000];
    scanf("%d",&n);
    for(int i=0;i<n;i++){
     scanf("%d %d",&(a[i]),&(b[i]));
    }
   u=a[0];
   for(g=1;g<n;g++){
     if(u<a[g]) {u=u;}else{u=a[g];}
   }
  v=b[0];
  for(p=1;p<n;p++){
       if(v>b[p]){v=v;}else{v=b[p];}
   }
   w=0;
    for(e=1.0*u;e<=1.0*v;e+=0.1){
        for(int j=0;j<n;j++){
            if(e>=a[j]&&e<=b[j]){w=1;break;}else{w=0;}
            }
            if(w==0)
        {
            printf("no");
            return 0;
        }}
     printf("%d %d",u,v);
    return 0;
}




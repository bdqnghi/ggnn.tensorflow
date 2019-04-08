int main(){
    int n,i,q[100000],z[100000],k,e,f,g;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d%d",&q[i],&z[i]);
    }
    for(k=1;k<=n;k++){
        for(i=0;i<n-k;i++){
            if(q[i]>q[i+1]){
                e=q[i+1];
                q[i+1]=q[i];
                q[i]=e;
                e=z[i+1];
                z[i+1]=z[i];
                z[i]=e;
            }
        }
    }
    e=z[0];
    for(k=1;k<n;k++){
    for(i=0;i<k;i++){
        if(z[i]>=e){
            e=z[i];
        }
    }
    if(q[k]<=e){
      f=e;
      g=1;
    }
    else{
        g=0;
        break;
    }
    }
    if(g==1){
      printf("%d %d",q[0],f);
    }
    if(g==0){
        printf("no\n");
    }
    return 0;
}







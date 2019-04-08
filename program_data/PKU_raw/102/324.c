int main(){
    int n,i,p=-1,q=-1,k;
    float a[40],c[40],d[40],g;
    char b[41][10];
    scanf("%d",&n);
    for(i=0;i<n;i++){
            scanf("%s %f",b[i],&a[i]);
    }
    for(i=0;i<n;i++){
             if(b[i][0]=='m'){
                 p=p+1;
                 c[p]=a[i];
             }else{
                 q=q+1;
                 d[q]=a[i];
             }
    }
    for(k=1;k<=p+1;k++){
            for(i=0;i<p+1-k;i++){
                    if(c[i]>c[i+1]){
                         g=c[i];
                         c[i]=c[i+1];
                         c[i+1]=g;
                    }
            }
     }
     for(k=1;k<=q+1;k++){
            for(i=0;i<q+1-k;i++){
                    if(d[i]<d[i+1]){
                         g=d[i];
                         d[i]=d[i+1];
                         d[i+1]=g;
                    }
            }
     }
     for(i=0;i<=p;i++){
           printf("%.2f ",c[i]);
     }
     for(i=0;i<=q;i++){
          if(i!=q){
           printf("%.2f ",d[i]);
          }else{
           printf("%.2f",d[i]);
          }
     }
     return 0;
}

int main(){
    int n,r,i,p,q;
    int high[100];
    int low[100];
    r=0;
    q=0;
    p=-1;
    scanf("%d",&n);
    for(i=0;i<n;i++){
           scanf("%d %d",&high[i],&low[i]);
    }
    for(i=0;i<n;i++){
           if(high[i]>=90&&high[i]<=140&&low[i]>=60&&low[i]<=90){
                         if(i-p==1){
                                  q=q+1;
                                  p=i;
                         }
                         
           }else{ 
                   if(r<q){
                            r=q;
                   }
                   q=0;
                   p=i;
           }
           if(i==n-1) {
                            if(r<q){
                                r=q;
                            }
           }
    }
    printf("%d",r);
    return 0;
}

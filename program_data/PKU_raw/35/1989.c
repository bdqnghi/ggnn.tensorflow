int main(){
    int a[1000][1000];
    int p,q,i,k;
    int m=0;
    int e,s,t,c;
    scanf("%d,%d",&p,&q);
    for (i=0;i<p;i++){
        for (k=0;k<q;k++){
                           scanf("%d",&a[i][k]);
                         }
                      }
    for (i=0;i<p;i++){
        if(m==1){
                 break;
                 }
        for (k=0;k<q;k++){
            if(m==1){
                     break;
                     }
            e=a[i][k];
            c=0;
            for(s=0;s<q;s++){
                             if(e+1<=a[i][s]){
                                           break;
                                           }
                             else{
                                  c+=1;
                                  }
                             }
                             if (c==q){
                                       c=0;
                                       for(t=0;t<p;t++){
                                                        if(e-1>=a[t][k]){
                                                                      break;
                                                                      }
                                                        else{
                                                             c+=1;
                                                             }
                                                        }
                                       if(c==p){
                                               printf("%d+%d",i,k);
                                               m=1;
                                               }
                                       }
                             }
                      }
    if(m==0){
             printf("No");
             }
    return 0;
}
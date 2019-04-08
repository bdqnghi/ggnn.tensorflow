int main(){
    int n,k;
    scanf("%d %d",&n,&k);
    int SZ[n];
    for(int m=0;m<n;m++){
        scanf("%d",&SZ[m]);
        }
    for(int i=0;i<n-1;i++){
            int I=0,J=0;
        for(int j=1;j<n-1-i;j++){
                
            if(SZ[i]+SZ[i+j]==k){
               printf("yes");
               I=i,J=j;
               break;
               }
               }
               if(SZ[I]+SZ[I+J]==k){
               
               break;}
               
            
        
    if(i==n-2){
       printf("no");
       }
       }
    return 0;
}    
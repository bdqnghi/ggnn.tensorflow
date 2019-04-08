int main(){
    int n,e;
    scanf("%d",&n);
    int QJ[n][2];
    for(int i=0;i<n;i++){
        scanf("%d %d",&QJ[i][0],&QJ[i][1]);
        }
    for(int j=0;j<n-1;j++){
        for(int k=0;k<n-1-j;k++){
            if(QJ[k][0]>QJ[k+1][0]){
               e=QJ[k+1][0];
               QJ[k+1][0]=QJ[k][0];
               QJ[k][0]=e;
               e=QJ[k+1][1];
               QJ[k+1][1]=QJ[k][1];
               QJ[k][1]=e;
               }
            }
        }
    
     for(double m=QJ[0][0];m<=QJ[n-1][0];m=m+0.5){
         int s=0;    
        for(int p=0;p<n;p++){
            if(m<QJ[p][0]||m>QJ[p][1]){
               s=s+1;
               }
            }
        if(s==n){
               printf("no");
               break;
               }
        if(m==QJ[n-1][0]){
               for(int j=0;j<n-1;j++){
        for(int k=0;k<n-1-j;k++){
            if(QJ[k][1]>QJ[k+1][1]){
               
               e=QJ[k+1][1];
               QJ[k+1][1]=QJ[k][1];
               QJ[k][1]=e;
               }
            }
        }           
               printf("%d %d",QJ[0][0],QJ[n-1][1]);               
               }
            }
        return 0;
        }
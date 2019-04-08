int main(){
    int n,i,k,t,e=0;
    scanf("%d",&n);
    int a[n],b[n];
    for(i=0;i<n;i++){
       scanf("%d %d",&(a[i]),&(b[i])); 
       }
    for(k=0;k<n;k++){
       for(i=0;i<n-k-1;i++){
          if(a[i]>a[i+1]){
            t=a[i+1];
            a[i+1]=a[i];
            a[i]=t;
            }
          if(b[i]>b[i+1]){
            t=b[i+1];
            b[i+1]=b[i];
            b[i]=t; 
            } 
          }
        }
     for(i=0;i<n-1;i++){
         if(b[i]>=a[i+1]){
              e++;            
           }
         }
     if(e<n-1){
       printf("no");
       }else{
      printf("%d %d",a[0],b[n-1]);     
      }
      return 0;  
 }
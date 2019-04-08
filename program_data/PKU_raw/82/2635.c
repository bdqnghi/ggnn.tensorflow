 int main(){
    int n,i,k,max;
    int x[100];
    int y[100];
    int biaoji[100];
    int jilu[100];
    scanf("%d",&n);
    for(i=0;i<n;i++){
      scanf("%d %d",&x[i],&y[i]);
      if(x[i]<141&&x[i]>89&&y[i]<91&&y[i]>59){
        biaoji[i]=1;                                        
      } else{
        biaoji[i]=0;       
      }              
    }
    if(n>1){
      for(i=0;i<100;i++){
      jilu[i]=0;                   
      } 
      k=1;      
      for(i=0;i<n-1;i++){
       if(biaoji[i]==1){
          if(biaoji[i+1]==1){
            k++; 
            jilu[i]=k;                 
          }else{
            k=1;
            jilu[i]=1;
          }            
       }else{
          jilu[i]=0;
          k=1;
       }                
      }
      max=jilu[0];
      for(i=1;i<n;i++){
        if(max<jilu[i]){
            max=jilu[i];                    
        }                
      }
      printf("%d",max); 
      }else{
       printf("%d",biaoji[0]);     
      }
  return 0;    
 }

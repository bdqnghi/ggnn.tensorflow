int main(){
    int n, i, j, m=0;
    scanf("%d", &n);
    int su[300];
    for(i=0;i<n;i++){
    scanf("%d", &(su[i]));
   }
  
    for(i=0;i<n-1;i++){
      for(j=i+1;j<n;j++){
         if(su[i]==su[j]){
           su[j]=-10;          
           }                
         }
      }
      printf("%d", su[0]); 
      for(i=1;i<n;i++){
       if(su[i]!=-10){
        printf(",%d", su[i]);              
                      }               
                       }

    return 0;
}

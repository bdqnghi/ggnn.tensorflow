  int main(){
      double high[40];
      double manhigh[40];
      double womanhigh[40];
      double sa; 
      char sex[40][10];
      int n,i,j,k,a;
      char man[5]={'m','a','l','e'};
      char woman[7]={'f','e','m','a','l','e'};
      scanf("%d",&n);
      for(i=0;i<n;i++){
        scanf("%s %lf",sex[i],&high[i]);                 
      }
      j=0;
      k=0;
      for(i=0;i<n;i++){
        if(strcmp(sex[i],man)==0){
          manhigh[j]=high[i];
          j++;                          
        }else{
          womanhigh[k]=high[i];
          k++;  
        }                
      }
      for(i=0;i<j-1;i++){
         for(a=0;a<j-1-i;a++){
            if(manhigh[a]>manhigh[a+1]){
              sa=manhigh[a];
              manhigh[a]=manhigh[a+1];
              manhigh[a+1]=sa;                             
            }                     
         }                 
      }
      for(i=0;i<k-1;i++){
         for(a=0;a<k-1-i;a++){
            if(womanhigh[a]>womanhigh[a+1]){
              sa=womanhigh[a];
              womanhigh[a]=womanhigh[a+1];
              womanhigh[a+1]=sa;                             
            }                     
         }                 
      }
      for(i=0;i<j;i++){
        printf("%.2lf ",manhigh[i]);                 
      }
      if(k==1){
         printf("%.2lf",womanhigh[0]);
      }else{
       for(i=k-1;i>0;i--){
         printf("%.2lf ",womanhigh[i]);                 
       }
       printf("%.2lf",womanhigh[0]);
      }
    
    return 0;    
  } 

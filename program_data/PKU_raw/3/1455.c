int main(){
   int A[1000],n,k,b=0,i;
   scanf("%d%d",&n,&k);
   for(int i=0;i<n;i++){
       scanf("%d",&(A[i]));    
          A[i]=A[i];
           }
   for(i=0;i<n-1;i++){
       int m=i;
       for(int j=i;i+j<n;j++){
           if((A[i]+A[i+j])==k){b=1;}    
               }             
                    }  
    if(b==1){printf("yes");}
    else{printf("no");}      
return 0;
}
int main(){
    int i,j,n,sum,m,f;
    scanf("%d",&n);
    for(i=0;i<n;i++){f=1;
                     scanf("%d",&m); 
                     for(j=0;j<m;j++){
                     scanf("%d",&sum);                                          
    if(((sum+3*j)>=60)&&(f)){
         f=0;
         sum=60-3*j;
         printf("%d\n",sum);
         }
    else if(((sum+3*j+3)>=60)&&(f)){
         f=0;      
         printf("%d\n",sum);
         }
         }
     if(f){
          sum=60-3*m;
         printf("%d\n",sum);
         }
         }     
    return 0;   
 }
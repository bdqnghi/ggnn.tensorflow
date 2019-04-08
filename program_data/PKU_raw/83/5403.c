int main(){
    int n,sz[MAX],szz[MAX],i,j,FEN;
    double szzz[MAX],f,a,SUM;
    FEN=0;
    scanf("%d",&n);
   
   for(i=0;i<n-1;i++){
   scanf("%d",&sz[i]);
   FEN=FEN+sz[i];
   }
   scanf("%d",&sz[n-1]);
   FEN=FEN+sz[n-1];
   for(j=0;j<n;j++){
       scanf("%d",&szz[j]);
       if(szz[j]>=90){
           szzz[j]=4.0;
       }
      else if (szz[j]>=85&&szz[j]<=89){
           szzz[j]=3.7;
       }
     else if(szz[j]>=82&&szz[j]<=84){
           szzz[j]=3.3;
       }
      else if(szzz[j]<=81&&szz[j]>=78){
           szzz[j]=3.0;
       }else if(szz[j]<=77&&szz[j]>=75){
           szzz[j]=2.7;
       }else if(szz[j]<=74&&szz[j]>=72){
           szzz[j]=2.3;
       }else if(szz[j]<=71&&szz[j]>=68){
           szzz[j]=2.0;
       }else if(szz[j]>=67&&szz[j]>=64){
           szzz[j]=1.5;
       }
       else if(szz[j]<=63&&szz[j]>=60){
           szzz[j]=1.0;
       }else if(szz[j]<=59){
           szzz[j]=0.0;
       }
   }
       SUM=0;
       a=0;
       for(i=0;i<n;i++){
           SUM=sz[i]*szzz[i];
           a=SUM+a;
       
       }
       
     
       
       f=a/FEN;
       printf("%.2lf",f);
       return 0;
}
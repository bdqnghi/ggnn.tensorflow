int main(){
   int n,i,j=0,k=0;
   int m=0,t,q,u;
   char e[50];
   double r[50],a[50],b[50],g;
   scanf("%d",&n);
   for(i=0;i<n;i++){
       scanf("%s",e);
       scanf("%lf",&r[i]);
       if(e[0]=='m'){             
                a[j]=r[i];
                j++;}else{
                    b[k]=r[i];
                    k++;};
                 }
    for(t=0;t<j;t++){
       q=t;
       for(u=t+1;u<j;u++){
           if(a[u]<a[q]){
               q=u;};
               }
      if(q!=t){
          g=a[q];
          a[q]=a[t];
          a[t]=g;
          };
          }
    t=0;q=0;u=0;g=0;         
    for(t=0;t<k;t++){
       q=t;
       for(u=t+1;u<k;u++){
           if(b[u]>b[q]){
               q=u;};
               }
      if(q!=t){
          g=b[q];
          b[q]=b[t];
          b[t]=g;
          };
          }                
    for(i=0;i<j;i++){
         printf("%.2lf ",a[i]);}
     for(i=0;i<k-1;i++){
         printf("%.2lf ",b[i]);}
     printf("%.2lf",b[k-1]);

	 return 0;
}

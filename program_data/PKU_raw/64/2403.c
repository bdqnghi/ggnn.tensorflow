 int main(){
   int i,j,n,k,l,r;
   int  x[10],y[10],z[10];
   double s[100]={0.0},e;


   scanf("%d\n",&n);
   for(i=0;i<n;i++){
    scanf("%d %d %d",&x[i],&y[i],&z[i]); 
 }
 l=0;
 
    for(i=0;i<n-1;i++){
      for(k=i+1;k<n;k++){ 
   r=(x[i]-x[k])*(x[i]-x[k])+(y[i]-y[k])*(y[i]-y[k])+(z[i]-z[k])*(z[i]-z[k]);
       s[l]=sqrt(1.0*r);
 
  l++; 
 
   }}
  for(i=1;i<=l;i++){
        for(j=0;j<=l-i;j++){
             if(s[j]<s[j+1]){
    e=s[j+1];
s[j+1]=s[j];
s[j]=e;}}}
           
 for(i=0;i<n*(n-1)/2;i++){
    for(j=0;j<n;j++){
  for(k=j+1;k<n;k++){
     r=(x[j]-x[k])*(x[j]-x[k])+(y[j]-y[k])*(y[j]-y[k])+(z[j]-z[k])*(z[j]-z[k]);
 

    if(s[i]!=s[i+1]){
 if(s[i]==sqrt(1.0*r)){
   printf("(%d,%d,%d)-(%d,%d,%d)=%.2lf\n",x[j],y[j],z[j],x[k],y[k],z[k],s[i]);}
   }else{continue;}
    }}}
return 0;
}
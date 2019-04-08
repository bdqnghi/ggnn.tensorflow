   int main(){
   int n,i,k,a;
   a=0;
   scanf("%d",&n);
   float d,e,g;
   d=0; 
   int c[n],b[n];
   for(i=0;i<n;i++){
   scanf("%d ",&c[i]);
   a=a+c[i];
}
   for(k=0;k<n;k++){
   if(k!=n-1){
   scanf("%d ",&b[k]);
}
   else{
   scanf("%d",&b[k]);
}
   if(b[k]<=100&&b[k]>=90){
      e=c[k]*4.0;
}
   if(b[k]<=89&&b[k]>=85){
      e=c[k]*3.7;
}
   if(b[k]<=84&&b[k]>=82){
      e=c[k]*3.3;
}
   if(b[k]<=81&&b[k]>=78){
      e=c[k]*3.0;
}
    if(b[k]<=77&&b[k]>=75){
      e=c[k]*2.7;
}
     if(b[k]<=74&&b[k]>=72){
      e=c[k]*2.3;
}
    if(b[k]<=71&&b[k]>=68){
      e=c[k]*2.0;
}
     if(b[k]<=67&&b[k]>=64){
      e=c[k]*1.5;
}
     if(b[k]<=63&&b[k]>=60){
      e=c[k]*1.0;
}
     if(b[k]<60){
      e=0;
}
    d=d+e;
}
    g=d/a;    
    printf("%.2f",g);
    return 0;
}
 int main(){
  int n,i,j,m;
  int a[10],b[10];
  float GPA,e[10],k,p;
  scanf("%d\n",&n);
  for(i=0;i<n-1;i++){
   scanf("%d ",&a[i]);
   }
  scanf("%d\n",&a[n-1]);
  scanf("%d",&b[0]);
  for(i=1;i<n;i++){
   scanf(" %d",&b[i]);
  }
 for(m=0,i=0;i<n;i++){
  m+=a[i];
    }
  for(i=0,k=0;i<n;i++){
    if(b[i]>=90&&b[i]<=100){
      e[i]=4.0;
   }
    if(b[i]>=85&&b[i]<=89){
      e[i]=3.7;
   }
     if(b[i]>=82&&b[i]<=84){
       e[i]=3.3;
   }
      if(b[i]>=78&&b[i]<=81){
       e[i]=3.0;
   }
      if(b[i]>=75&&b[i]<=77){
       e[i]=2.7;
   }
      if(b[i]>=72&&b[i]<=74){
       e[i]=2.3;
   }
      if(b[i]>=68&&b[i]<=71){
        e[i]=2.0;
   }
     if(b[i]>=64&&b[i]<=67){
         e[i]=1.5;
    }
      if(b[i]>=60&&b[i]<=63){
         e[i]=1.0;
     }
      if(b[i]<60){
        e[i]=0;
     }
     p=a[i];
    k+=(float)(e[i]*p);
   }
   GPA=(float)k/(m*1.0);
   printf("%.2f",GPA);
    return 0;
}



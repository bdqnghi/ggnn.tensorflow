int a[50000];
int b[50000];
int c[100000];
int d[100000];
int z[20000];
int main(){
   int n,i,k,p=0,q=0,m=0,u=0,y=0,max=0,min=0;
   scanf("%d",&n);
   for(i=0;i<n;i++){
      scanf("%d %d",&a[i],&b[i]);
      c[i]=2*a[i];
      d[i]=2*b[i];
   }
   max=c[0];
   min=c[0];
   for(i=0;i<n;i++){
      if(c[i]>max){
        max=c[i];}
      if(c[i]<min){
        min=c[i];
      }
   }
   for(i=0;i<n;i++){
      if(d[i]>max){
        max=d[i];
      }
      if(d[i]<min){
        min=d[i];}
   }
   for(k=0;k<20000;k++){
      z[k]=0;
   }
   for(i=0;i<n;i++){
      p=c[i];
      q=d[i];
      for(k=p;k<=q;k++){z[k]=1;}
   }
   for(i=0;i<20000;i++){
     if(z[i]==1){u=i;break;}
   }
   for(i=0;i<20000;i++){
    if(z[i]==1){y++;}
   }
   for(i=u;i<20000;i++){
      
      if(z[i]==0){break;}
      if(z[i]==1){m++;}
   }
   if(m==y){printf("%d %d",min/2,max/2);}
   if(m!=y){printf("no");}
 return 0;  
}

int main(){
  int n,i;
  char xb[40][8];
  double h[40];
  scanf("%d",&n);
  for(i=0;i<n;i++){
    scanf("%s %lf",xb[i],&h[i]);
  }
  double mh[40],fh[40];
  int m=0,f=0;
  char bx[8]="male";
  for(i=0;i<n;i++){
   if(strcmp(xb[i],bx)==0){
     mh[m]=h[i];
     m++;
   }else{
     fh[f]=h[i];
     f++;
   }
  }
  for(int p=1;p<=m;p++){
   for(i=0;i<m-p;i++){
     if(mh[i]>mh[i+1]){
     double e;
     e=mh[i];
     mh[i]=mh[i+1];
     mh[i+1]=e;
     }
   }
  }
  for(int a=1;a<=f;a++){
   for(i=0;i<f-a;i++){
     if(fh[i]<fh[i+1]){
     double e;
     e=fh[i];
     fh[i]=fh[i+1];
     fh[i+1]=e;
     }
    }
  }
  for(i=0;i<m;i++){
   printf("%.2lf ",mh[i]);
  }
  for(i=0;i<f-1;i++){
   printf("%.2lf ",fh[i]);
  }
  printf("%.2lf",fh[f-1]);
  return 0;
}

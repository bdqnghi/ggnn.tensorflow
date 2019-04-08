int main(){
int i,j,x,n,m;
double a,b,d;
double u[100],sz[100];
scanf("%d",&n);
for(i=0;i<n;i++){
a=0,b=0,d=0;   
scanf("%d",&m);
   for(j=0;j<m;j++){
     scanf("%lf",&sz[j]);
     a=sz[j]+a;
}
     double b=a/m;
     for(x=0;x<m;x++){
         double c=(sz[x]-b)*(sz[x]-b);
          d=d+c; }  
   u[i]=sqrt(d/m);
}
   for(i=0;i<n;i++){
   printf("%.5lf\n",u[i]);
}
return 0;
}

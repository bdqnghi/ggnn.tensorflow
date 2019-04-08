int main(){
int m,n,i,j;
scanf("%d",&m);
for(j=0;j<m;j++){
scanf("%d",&n);
double a=1,b=2,s=0;
for(i=0;i<n;i++){
  s+=b/a;
  b=a+b;
  a=b-a;
}
printf("%.3lf\n",s);
}
return 0;
}

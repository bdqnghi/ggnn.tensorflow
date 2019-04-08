int main(){
int a;
scanf("%d",&a);
for(int i=1;i<=a;i++){
double b;
scanf("%lf",&b);
double sz[100];
double n=0;
for(int m=1;m<=b;m++){
scanf("%lf",&(sz[m]));
n+=sz[m]/b;}
double sum=0;
for(int k=1;k<=b;k++){
sum+=(sz[k]-n)*(sz[k]-n);}
double S;
S=sqrt(sum/b);
printf("%.5lf\n",S);}
return 0;}
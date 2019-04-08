int main(){
int a[500];
int b[500];
double c[500];
double GPA;
int i,kc,j;
double sum,res;
scanf("%d\n",&kc);
for(i=0;i<kc;i++){
scanf("%d",&a[i]);
}
for(i=0;i<kc;i++){
scanf("%d",&b[i]);
}
for(i=0,j=0;i<kc,j<kc;i++,j++){
if(b[i]>=90&&b[i]<=100){
c[j]=4.0;
}else if(b[i]>=85&&b[i]<=89){
c[j]=3.7;
}else if(b[i]>=82&&b[i]<=84){
c[j]=3.3;
}else if(b[i]>=78&&b[i]<=81){
c[j]=3.0;
}else if(b[i]>=75&&b[i]<=77){
c[j]=2.7;
}else if(b[i]>=72&&b[i]<=74){
c[j]=2.3;
}else if(b[i]>=68&&b[i]<=71){
c[j]=2.0;
}else if(b[i]>=64&&b[i]<=67){
c[j]=1.5;
}else if(b[i]>=60&&b[i]<=63){
c[j]=1.0;
}else if(b[i]<60){
c[j]=0.0;
}
}
sum=0;
res=0;
for(i=0;i<kc;i++){
sum=sum+1.00*c[i]*a[i];
res=res+a[i];
}
GPA=1.00*sum/res;
printf("%.2lf",GPA);
return 0;
}
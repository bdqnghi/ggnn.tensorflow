int main(){
int n,i,j,max,t,min;
int a[50000],b[5000];
int s[10000];
for(i=1;i<10000;i++){
s[i]=1;}
scanf("%d",&n);
for(i=0;i<n;i++){
scanf("%d%d",&a[i],&b[i]);
for(j=a[i];j<b[i];j++){
s[j]=0;}}
max=b[0];
min=a[0];
for(i=0;i<n;i++){
if(a[i]<min){
min=a[i];}
if(b[i]>max){
max=b[i];}}
t=0;
for(i=min;i<max;i++){
if(s[i]==1){
t=t+1;
printf("no");
break;}}
if(t==0){
printf("%d %d",min,max);}

}
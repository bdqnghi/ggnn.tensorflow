int main(){
    int N,a[500],t,i,b[500],p;
    scanf("%d",&N);
    for(i=0;i<N;i++){
    scanf("%d ",&a[i]);
}
for(i=0;i<N;i++){
if(a[i]%2==1){
b[i]=a[i];}
else{b[i]=0;}}
for(i=0;i<N;i++){
for(p=0;p<N-i;p++){
if(b[p]>b[p+1]){
t=b[p+1];
b[p+1]=b[p];
b[p]=t;}}}
for(i=0;i<N;i++){
if(b[i]>0){
printf("%d,",b[i]);}}
printf("%d",b[N]);
return 0;
}
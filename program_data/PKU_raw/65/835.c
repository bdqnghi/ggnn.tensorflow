int main(){
int a[201],b[201],i,n,j=0,k=0;
scanf("%d",&n);
for(i=0;i<n;i++){
scanf("%d%d",&a[i],&b[i]);
}
for(i=0;i<n;i++){
if((a[i]<b[i]&&b[i]-a[i]!=2)||a[i]-b[i]==2){
j++;}
if((a[i]>b[i]&&a[i]-b[i]!=2)||b[i]-a[i]==2){
k++;}
}
if(j>k){
printf("A");}
if(j<k){
printf("B");}
if(j==k){
printf("Tie");}
return 0;
}
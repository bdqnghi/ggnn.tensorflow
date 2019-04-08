int main(){
int sz[8][8];
int hang,lie;
scanf("%d,%d",&hang,&lie);
int i,k;
int temp_max=0,temp_min=0;
int temp_min2=0;
int pianduan=0;
for(i=0;i<hang;i++){
for(k=0;k<lie;k++){
scanf("%d\n ",&sz[i][k]);
}}

for(i=0;i<hang;i++){
for(k=0;k<lie;k++){
if(sz[i][k]>sz[i][temp_max]){
temp_max=k;
temp_min=i;}}


for(i=0;i<hang;i++){
if(sz[i][temp_max]<sz[temp_min2][temp_max])
temp_min2=i;}
if(temp_min2==temp_min){
printf("%d+%d",temp_min,temp_max);
pianduan=1;}}

if(pianduan==0) printf("No");

return 0;
}
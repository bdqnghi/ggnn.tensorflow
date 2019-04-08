int main()
{
int i,j,n,s=0,m=0;
int b[201]; 
 int  a[201][201];

scanf("%d",&n);
for(i=0;i<n;i++){
for(j=0;j<2;j++){
scanf("%d",&a[i][j]); }  }     
for(j=0;j<2;j++){

for(i=0;i<n;i++){
b[i]=a[i][0];}
for(i=0;i<n;i++){
if(a[i][1]==b[i]){
continue;} else if((a[i][1]==0&&b[i]==1)||(a[i][1]==1&&b[i]==2)||(a[i][1]==2&&b[i]==0)){
s++;} else{m++;}}
if(s==m){
printf("Tie");}
else if(s>m)
{printf("B");}
else{
printf("A");}
return 0;}}



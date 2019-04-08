int main(){
char fj2[100][100];
int n,a,b,i,k,fj[100][100],fj3[100][100],peo,m,day;
scanf("%d",&n);
peo=0;
for(i=0;i<n;i++){
scanf("%s",fj2[i]);}

for(i=0;i<n;i++){
for(k=0;k<n;k++){
if (fj2[i][k]=='.'){fj[i][k]=1,fj3[i][k]=1;}
else if(fj2[i][k]=='#'){fj[i][k]=0,fj3[i][k]=0;}
else if(fj2[i][k]=='@'){fj[i][k]=2,fj3[i][k]=2;}}}
scanf("%d",&m);
for(day=2;day<=m;day++){
for(i=0;i<n;i++){
for(k=0;k<n;k++){
if(fj[i][k]==2){
if(fj[i-1][k]==1){fj3[i-1][k]=2;}
if(fj[i+1][k]==1){fj3[i+1][k]=2;}
if(fj[i][k-1]==1){fj3[i][k-1]=2;}
if(fj[i][k+1]==1){fj3[i][k+1]=2;}}}}
for(a=0;a<n;a++){
for(b=0;b<n;b++){
fj[a][b]=fj3[a][b];
}}}

for(i=0;i<n;i++){
for(k=0;k<n;k++){
if(fj[i][k]==2){peo=peo+1;}}}
printf("%d",peo);
return 0;}


int main()
{
int n,m,p=0;
int k,i,j;
char r[101][101];
scanf("%d\n",&n);
for(i=0;i<=n+1;i++){
for(j=0;j<=n+1;j++){
r[i][j]='#';}}
for(i=1;i<=n;i++){
for(j=1;j<n;j++){
scanf("%c ",&r[i][j]);}
scanf("%c\n",&r[i][n]);}
scanf("%d",&m);
for(k=1;k<m;k++){
for(i=1;i<=n;i++){
for(j=1;j<=n;j++){
if(r[i][j]=='@'){
if(r[i-1][j]=='.'){
r[i-1][j]='a';}
if(r[i+1][j]=='.'){
r[i+1][j]='a';}
if(r[i][j-1]=='.'){
r[i][j-1]='a';}
if(r[i][j+1]=='.'){
r[i][j+1]='a';}}}}
for(i=1;i<=n;i++){
for(j=1;j<=n;j++){
if(r[i][j]=='a'){
r[i][j]='@';}}}}
for(i=1;i<=n;i++){
for(j=1;j<=n;j++){
if(r[i][j]=='@'){
p=p+1;}}}
printf("%d",p);
return 0;
}
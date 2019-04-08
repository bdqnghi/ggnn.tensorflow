int main(){
int m,n,i;
scanf("%d %d\n",&n,&m);
int sz[10000];
for(i=0;i<n;i++){
scanf("%d ",&sz[i]);}
for(i=n;i<n+n-m;i++){
sz[i]=sz[i-n];}
for(i=n-m;i<n+n-m-1;i++){
printf("%d ",sz[i]);}
printf("%d",sz[n+n-m-1]);
return 0;}


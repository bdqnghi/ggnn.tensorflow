int main()
{
int sz[1000][1000];
int n,a,b,c,d,e,f,g,h,m,i,t;
scanf("%d",&n);
for(i=0;i<n;i++){
   for(t=0;t<n;t++){
	scanf("%d",&sz[i][t]);}}
for(a=0;a<n;a++){
for(b=0;b<n;b++){if(sz[a][b]==0){d=b;break;}}}
for(a=0;a<n;a++){
for(b=n-1;b>=0;b--){if(sz[a][b]==0){c=b;break;}}}
for(e=n-1;e>=0;e--){
for(f=n-1;f>=0;f--){if(sz[e][f]==0){g=e;break;}}}
for(e=0;e<n;e++){
for(f=n-1;f>=0;f--){if(sz[e][f]==0){h=e;break;}}}

m=(h-g-1)*(c-d-1);
printf("%d",m);
return 0;
}
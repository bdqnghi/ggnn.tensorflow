int main(){
int n,i,k,h,l,j;
int sz[MAX][MAX];
int jh[MAX];
scanf("%d",&n);
for(i=0;i<n;i++){
jh[i]=0;}
for(i=0;i<n;i++){
scanf("%d %d",&h,&l);
for(j=0;j<h;j++){
for(k=0;k<l;k++){
scanf("%d",&sz[j][k]);
}
}
for(k=0;k<l;k++){
jh[i]+=sz[0][k];
jh[i]+=sz[h-1][k];}
for(j=1;j<h-1;j++){
jh[i]+=sz[j][0];
jh[i]+=sz[j][l-1];}
if(h==1&&l==1){
jh[i]-=sz[0][0];
}
}
for(i=0;i<n;i++){
printf("%d\n",jh[i]);
}
return 0;
}
int main(){
int m,n,i,k,s,q,w,e,r;
scanf("%d%d",&n,&m);
int a[n][m];
for(i=0;i<n;i++){
for(k=0;k<m;k++){
scanf("%d",&(a[i][k]));
}
}
s=0;
for(k=0;s<=m*n;k++){
for(q=k;q<=m-k-1;q++){
printf("%d\n",a[k][q]);
s=s+1;
}
if(s==m*n){
break;
}
for(w=k+1;w<=n-k-1;w++){
printf("%d\n",a[w][m-k-1]);
s=s+1;
}
if(s==m*n){
break;
}
for(e=m-k-2;e>=k;e--){
printf("%d\n",a[n-k-1][e]);
s=s+1;
}
if(s==m*n){
break;
}
for(r=n-k-2;r>=k+1;r--){
printf("%d\n",a[r][k]);
s=s+1;
}
if(s==m*n){
break;
}
}
return 0;
}
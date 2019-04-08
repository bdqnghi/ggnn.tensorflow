int main(){

int a=1 ,b=1,n,e,sz[10000]={1,1},j,i;
scanf("%d",&n);
for(j=0;j<n;j++){
scanf("%d",&e);

for(i=2;i<e;i++){
sz[i]=sz[i-1]+sz[i-2];
}
printf("%d\n",sz[e-1]);










}
return 0;
}
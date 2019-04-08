int main(){
int j,i,n,k,s=0;
scanf("%d %d\n",&n,&k);
int sz[n];
for(i=0;i<=n-1;i++){
scanf("%d",&sz[i]);
for(j=0;j<=i;j++){
if(sz[i]+sz[j]==k){
s++;}}}
if(s>0){printf("yes");}
else{printf("no");}
return 0;
}  
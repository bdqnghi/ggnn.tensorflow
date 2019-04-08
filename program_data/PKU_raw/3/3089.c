int main(){
int n,k,s;
s=0;
int sz[1000];
scanf("%d %d",&n,&k);
for(int i=0;i<n;i++){
scanf("%d ",&sz[i]);
}
for(int i=0;i<n;i++){
  for(int j=0;j<n;j++){
    if((sz[j]+sz[i])==k&&j!=i){
    s++;
   }}}
if(s==0){
   printf("no");
}else{
   printf("yes");
}
return 0;
}

  
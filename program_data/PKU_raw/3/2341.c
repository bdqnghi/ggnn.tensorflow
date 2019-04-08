int main(){
int n,k,i,j,sz[1000];
 j=1;
scanf("%d%d",&n,&k);
 for(i=1;i<=n;i++){scanf("%d",&sz[i]);} 
 for(i=j;i<n;i++){
  if(sz[j]+sz[i+1]==k){printf("yes");  break;}
  if(i==n-1){j++;  i=j;}
  if(j==n-1){
   if(sz[j]+sz[i+1]==k){
printf("yes");  
break;
}
    else{printf("no");}
}
}
return 0;
}
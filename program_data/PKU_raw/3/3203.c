int main(){
 int sz[N],n,k,i,p,sum,isbreak=0;
 scanf("%d%d\n",&n,&k);
 for(i=0;i<n;i++){
	 scanf("%d",&(sz[i]));
 }
 for(i=0;i<n-1;i++){
   for(p=i+1;p<n;p++){
    sum=sz[i]+sz[p];
	if(sum==k){
	 isbreak=1;
	 break;
	}
   }if(isbreak==1){
     break;
   }
 }
 if(isbreak==0)
   printf("no");
 if(isbreak==1) 
   printf("yes");
  return 0;
}
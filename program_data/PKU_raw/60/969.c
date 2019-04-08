int main()
{
   int n;
   scanf("%d",&n);
   int i,k,t=0,sz[10000];
   for(i=1;i<10000;i++){
	   sz[i]=1;
   }
   for(i=3;i<=n-2;i++){
	   for(k=2;k<=i-1;k++){
		   if(i%k==0){
			   sz[i]=0;
			   break;
		   }else if((i+2)%(k+2)==0||(i+2)%(k+1)==0||(i+2)%k==0){
			   sz[i]=0;
			   break;
		   }
	   }

	   if(sz[i]==1){
		   if(i==n-2){
			   printf("%d %d",i,i+2);
			   t=1;
		   }else{
			   printf("%d %d\n",i,i+2);
			   t=1;
		   }
	   }
   }
   if(t==0){
	   printf("empty");
   }
   return 0;
}
int main(){
   int n,k,e;
   int s[1000];
   int i=0,j=0,p=0;
   scanf("%d %d",&n,&k);

   for(i=0;i<n;i++){
    scanf("%d",&(s[i]));
   }
   for(j=0;j<n-1;j++){
     i=1;
	   for(i=1;i<n-j;i++){
		   e=s[j]+s[i+j];
		   if(e==k){
              p=1;

		   }
		 
	   }
   }
   if(p==0){
	   printf("no");

   }
   if(p==1){
	   printf("yes");
   }
  
 return 0;
 
}
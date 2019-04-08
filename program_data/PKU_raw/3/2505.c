
int main(){
   int n,k,i,j,t;
   int a[Max];
   scanf("%d %d\n",&n,&k);
   for(i=0;i<n;i++){
      scanf("%d ",&a[i]);
   }
   for(i=0;i<n;i++){
      t=k-a[i];
	  for(j=0;j<n;j++){
		  if(a[j]==t&&j!=i){
			  
			    printf("yes");
				return 0;
			  
		  
		  }
	  
	  }
   }
   printf("no");
   return 0;
}
int main(){
 int n,k,a[1000],i,j;
 scanf("%d%d",&n,&k);
 for(i=0;i<n;i++){
  scanf("%d",&a[i]);
 }
 for(i=0;i<n;i++){
     for(j=i+1;j<n-i;j++){   
         if(a[j]+a[i]!=k){
           continue;
		 }
          if(a[j]+a[i]==k){
             printf("yes");
             return 0;
		  }
	 }
 }
 if(i==n){
	 printf("no");
 }

 return 0;
}
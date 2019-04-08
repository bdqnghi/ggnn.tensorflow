int main(){
   int n;
   scanf("%d",&n);
   int a[20];
   int i,m,r,s,t;
   for(i=0;i<n;i++){
		 scanf("%d",&a[i]);
   }
   int sz[20];
   for(i=0;i<20;i++){
    	 if(i==0){
		     sz[i]=1;
		 }else if(i==1){
			 sz[i]=1;
		 }else{
			 r=sz[i-1];
			 s=sz[i-2];
			 t=r+s;
			 sz[i]=t;
		 }
   }
   for(i=0;i<n;i++){
    	 if(i==n-1){
		     m=a[i];
		     printf("%d",sz[m-1]);
			 m=0;
		 }else{
			 m=a[i];
		     printf("%d\n",sz[m-1]);
			 m=0;
		 }
	}
	return 0;
}
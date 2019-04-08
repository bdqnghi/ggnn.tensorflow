int main(){
 int m,n,i,j;
 double a,b=0,sz[100];
 scanf("%d",&m);
 for(i=0;i<m;i++){
	 scanf("%d",&n);
	 b=0;
     for(j=0;j<=n;j++){
		 sz[0]=1;
		 sz[1]=2;
		 if(j==0){
			 a=2;
		 }
		 else if(j==1){
			 a=1.5;
		 }
		      else{
			   sz[j]=sz[j-2]+sz[j-1];
		       }
         
	 }
	 for(j=0;j<n;j++){
	           a=sz[j+1]/sz[j];
			   b=b+a;
	 }
	 printf("%.3lf\n",b);
 }
return 0;
}
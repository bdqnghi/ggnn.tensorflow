int main(){
	int i,n,a[200]={0},b[200]={0},x=0,y=0;
	 
	 scanf("%d",&n);
	 for(i=0;i<n;i++){
		 scanf("%d %d\n",&a[i],&b[i]);
	
		 if(a[i]==0&&b[i]==1){
			 x++;}
         else if(a[i]==1&&b[i]==2){
			 x++;}
	
		else if(a[i]==2&&b[i]==0){
			x++;}
	   else if(a[i]==1&&b[i]==0){
		  y++;}
		else if(a[i]==2&&b[i]==1){
			y++;}
		 else if(a[i]==0&&b[i]==2){
			y++;}
      
        else if(a[i]==b[i]){
			continue;}}
	 if(x>y){
       printf("A");}
	 if(x<y){
       printf("B");}
	 if(x==y){
		 printf("Tie");}
return 0;
}
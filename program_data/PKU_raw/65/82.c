int main(){
	int c[N][N];
	int a=0;
	int b=0;
	int i, k, n;
	scanf("%d", &n);
	for(i=0;i<n;i++){
		for(k=0;k<2;k++){
			scanf("%d", &c[i][k]);
		}
	}
     for(i=0;i<n;i++){
		 if((c[i][0]==0&&c[i][1]==1)||(c[i][0]==1&&c[i][1]==2)||(c[i][0]==2&&c[i][1]==0)){
			 a=a+1;
		 }else if((c[i][1]==0&&c[i][0]==1)||(c[i][1]==1&&c[i][0]==2)||(c[i][1]==2&&c[i][0]==0)){
			 b=b+1;
		 }else{
			 continue;
		 }
	 }
	 if(a>b){
		 printf("A");
	 }else if(a<b){
		 printf("B");
	 }else if (a=b){
		 printf("Tie");
	 }
	  return 0;
}
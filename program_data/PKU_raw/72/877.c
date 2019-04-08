
int main(){
 int s[20][20];
 int m,n;
 scanf("%d%d",&m,&n);
 for(int i=0;i<=m-1;i++){
	 for(int j=0;j<=n-1;j++){
		 scanf("%d",&s[i][j]);
	 }
 }
 for(int a=0;a<=m-1;a++){
	 for(int b=0;b<=n-1;b++){
		 if(a==0){
			 if(b==0){
				 if(s[a][b]>=s[a][b+1]&&s[a][b]>=s[a+1][b]){
					 printf("%d %d\n",a,b);
				 }
			 }else if(b<=n-2){
				 if(s[a][b]>=s[a][b+1]&&s[a][b]>=s[a][b-1]&&s[a][b]>=s[a+1][b]){
                      printf("%d %d\n",a,b);
				 }
			 }else if(b==n-1){
				 if(s[a][b]>=s[a][b-1]&&s[a][b]>=s[a+1][b]){
					 printf("%d %d\n",a,b);
				 }
			 }
		 }else if(a!=0&&a!=m-1){
			 if(b==0){
				 if(s[a][b]>=s[a+1][b]&&s[a][b]>=s[a-1][b]&&s[a][b]>=s[a][b+1]){
					 printf("%d %d\n",a,b);
				 }
			 }else if(b<=n-2){
				 if(s[a][b]>=s[a][b+1]&&s[a][b]>=s[a][b-1]&&s[a][b]>=s[a+1][b]&&s[a][b]>=s[a-1][b]){
					 printf("%d %d\n",a,b);
				 }
			 }else if(b==n-1){
				 if(s[a][b]>=s[a][b-1]&&s[a][b]>=s[a-1][b]&&s[a][b]>=s[a+1][b]){
					 printf("%d %d\n",a,b);
				 }
			 }
		 }else{
			 if(b==0){
				 if(s[a][b]>=s[a][b+1]&&s[a][b]>=s[a-1][b]){
					 printf("%d %d\n",a,b);
				 }
			 }else if(b!=n-1){
				 if(s[a][b]>=s[a][b-1]&&s[a][b]>=s[a][b+1]&&s[a][b]>=s[a-1][b]){
					 printf("%d %d\n",a,b);
				 }
			 }else{
				 if(s[a][b]>=s[a][b-1]&&s[a][b]>=s[a-1][b]){
					 printf("%d %d\n",a,b);
				 }
			 }
		 }
	 }
 }





		 
  

 return 0;}
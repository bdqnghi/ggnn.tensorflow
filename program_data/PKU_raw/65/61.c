int main(){
   int n,a,b,i,A=0,B=0;
   scanf("%d",&n);
   for(i=0;i<n;i++){
     scanf("%d %d",&a,&b);
	 if((a==0&&b==1)||(a==1&&b==2)||(a==2&&b==0)){
	 A++;
	 }
	 else if((b==0&&a==1)||(b==1&&a==2)||(b==2&&a==0)){
	 B++;
	 }
	 else if((a==0&&b==0)||(a==1&&b==1)||(a==2&&b==2)){
	 A+=0;
	 B+=0;
	 }
	 }
	 if(A>B){
	 printf("A");
	 }
	 else if(B>A){
	 printf("B");
	 }
	 else if(A=B){
	 printf("Tie");
	 }
     return 0;
   }

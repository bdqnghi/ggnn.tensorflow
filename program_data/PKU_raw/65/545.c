int main(){
  int n,i,num1=0,num2=0;
  int a[200],b[200];
   scanf("%d\n",&n);
   for(i=0;i<n;i++){
	   scanf("%d %d",&a[i],&b[i]);
	   if((a[i]==0&&b[i]==1)||(a[i]==1&&b[i]==2)||(a[i]==2&&b[i]==0)){
               num1+=1;
	   }else if((b[i]==0&&a[i]==1)||(b[i]==1&&a[i]==2)||(b[i]==2&&a[i]==0)){
		   num2+=1;
	   }
   }
   if(num1>num2){
	   printf("A");
   }
   if(num2>num1){
	   printf("B");
   }
   if(num1==num2){
	   printf("Tie");
   }

	return 0;
}
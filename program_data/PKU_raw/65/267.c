int main(){
   int n=0,A=0,B=0;
   int a[200]={0},b[200]={0};
   int i=0,j=0;
   scanf("%d",&n);
   for(i=0;i<n;i++){
      scanf("%d",&a[i]);
	  scanf("%d",&b[i]);
   }
   for(j=0;j<n;j++){
	   if((a[j]==0&&b[j]==1)||(a[j]==1&&b[j]==2)||(a[j]==2&&b[j]==0)){
	      A++;
	   }else if((b[j]==0&&a[j]==1)||(b[j]==1&&a[j]==2)||(b[j]==2&&a[j]==0)){
	      B++;
	   }
   }
   if(A>B){
      printf("%c",'A');
   }else if(A<B){
      printf("%c",'B');
   }else{
      printf("%c%c%c",'T','i','e');
   }
   return 0;
}
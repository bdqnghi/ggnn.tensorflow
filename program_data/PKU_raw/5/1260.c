int main(){
   char a[501],b[501];
   int i,time=0;
   double n,p,l,j,k,same=0;
   scanf("%lf",&n);
   scanf("%s",&a);
   scanf("%s",&b);
   j=strlen(a);
   k=strlen(b);
   for(i=0;i<j;i++){
	   if(!(a[i]=='A'||a[i]=='T'||a[i]=='C'||a[i]=='G')){
		   printf("error");
		   time++;
		   break;
	   }
   }
   for(i=0;i<k;i++){
	   if((!(b[i]=='A'||b[i]=='T'||b[i]=='C'||b[i]=='G'))&&time==0){
		   printf("error");
		   time++;
		   break;
	   }
   }
   if(j!=k&&time==0){
	   printf("error");
	   time++;
   }
   if(time==0){
	   for(i=0;i<j;i++){
		   if(a[i]==b[i]){
			   same++;
		   }
	   }
	   l=strlen(a);
	   p=same/l;
	   if(p>n){
		   printf("yes");
	   }else{
		   printf("no");
	   }
   }
   return 0;
}
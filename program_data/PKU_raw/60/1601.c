void main(){
int n,i,j,a,b,c,d;
//int A[100]={0};
   scanf("%d",&n);
   a=2;
   b=0;
   d=0;
   c=0;
   for(i=3;i<=n;i++){
	   for(j=2;j<i;j++){
		   if(i%j==0) {
			   c=1;break;
		   }
		   else {
			c=0;
		   b=j+1;
		  
		   }
	   }
	   if(c==0&&b-a==2) {
		   printf("%d %d\n",a,b);
		   a=b;
		   b=0;
		   d+=1;
	   }
	   else {
		   if(c==0) a=b;
		   
	   }
		  
   }
   if(d==0) printf("empty");
}
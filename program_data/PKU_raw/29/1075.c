int main(){
   int m,n;
   scanf("%d",&m);
   for(int i=0;i<m;i++){
       scanf("%d",&n);
       double s=0;
       int a=2,b=1,c;
	   for(int j=1;j<=n;j++){
		   s+=(1.0*a)/b;
		   c=a;
		   a=a+b;
		   b=c;
	   }
	   printf("%.3lf\n",s);
   }
   return 0;
 }
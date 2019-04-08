int main()
{
 int n,b;
 int w=0;
 int q=0;
 int i=1;
 scanf("%d",&n);
 while(i<=n){
	 scanf("%d",&b);
	 if(b>=w){
		 q=w;
		 w=b;
	 }else{
		 if(b<w&&b>=q){
			 w=w;
			 q=b;
		 }
	 }
	 i++;
 }
 printf("%d\n%d\n",w,q);
 return 0;
}
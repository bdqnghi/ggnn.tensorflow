int main(){
	int n,m;
	scanf("%d",&n);
         if(!(n==1)){
	  do{
		if(n%2==0){
			m=n/2;
			printf("%d/2=%d\n",n,m);
		}else{
			m=n*3+1;
			printf("%d*3+1=%d\n",n,m);
		}
		n=m;
	  }
	  while(!(n==1));
         }
	printf("End");
	return 0;
}
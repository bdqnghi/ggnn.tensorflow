int main(){
	int n,j,i;
	scanf("%d",&n);
for(;n!=1;){
	if(n%2==0){ printf("%d/2=",n); n=n/2; 	printf("%d",n);}
	 else{  printf("%d*3+1=",n); n=n*3+1; 	printf("%d",n);}
	 printf("\n");}
	printf("End");
	return 0;
}

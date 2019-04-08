int main()
{
    int n;
	scanf("%d",&n);
	int i;
	for(i=1;n!=1;i++){
	  if(n!=1&&n%2==1){
		  int a=n;
		  n=n*3+1;
		  printf("%d*3+1=%d\n", a, n);
	  }else if(n%2==0){
		  int b=n;
		  n=n/2;
		  printf("%d/2=%d\n", b, n);
	  }
	}
	printf("End");
    return 0;
}
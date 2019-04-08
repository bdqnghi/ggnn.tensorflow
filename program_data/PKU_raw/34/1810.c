int main()
{
	int n;
	scanf("%d",&n);
	for(;n!=1;){
	if(n%2==0){
	printf("%d/%d=%d\n",n,2,n/2);
	n=n/2;
	}
	else{
	printf("%d*%d+%d=%d\n",n,3,1,n*3+1);
	n=n*3+1;
	}
	}
	if(n==1)
	printf("End");
  return 0;
}

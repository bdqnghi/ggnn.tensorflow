int main()
{
	int sushu(int n);
	int i,n,cunzai=0;
	scanf("%d",&n);
	for(i=3;i<=n-2;i+=2){
		if(sushu(i)&&sushu(i+2)){
			cunzai=1;
			printf("%d %d\n",i,i+2);
		}
	}
	if(cunzai==0)
		printf("empty");
	return 0;
}
int sushu(int n)
{
	int i,gen,result=1;
	gen=sqrt(n);
	for(i=2;i<gen+1;i++){
		if(n%i==0){
			result=0;
			break;
		}
	}
	return result ;
}
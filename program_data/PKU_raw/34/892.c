int main()
{
	int n,a,b,c=0;
	scanf("%d",&n);
	a=n;
	if(n==1){
		printf("End");
	}else{
			for(;1<a;){
				if(a==1){break;}else{
				if(a%2==0){
					b=a;
					a=a/2;
					printf("%d/2=%d",b,a);
					printf("\n");}else{
				if(a%2==1){
					b=a;
					a=a*3+1;
					printf("%d*3+1=%d",b,a);
					printf("\n");}
				
			}
		
					}}printf("End");}

	return 0;
}
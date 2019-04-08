int main()
{
    int n,i;
	scanf("%d",&n);
	if(n==1){
		printf("End");
	}else{
		for(i=0;;i++){
			if(n%2==0){
				printf("%d/2=%d\n",n,n/2);
				n/=2;
			}else{
				printf("%d*3+1=%d\n",n,3*n+1);
				n=3*n+1;
			}
			if(n==1){
				break;
			}
		}
			printf("End\n");
	}

         
    return 0;
}
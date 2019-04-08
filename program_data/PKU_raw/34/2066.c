int main()
{
	int i,n,t=2,l,j;
	scanf("%d",&n);
	for(i=0;n!=1;i++){
		if(n%2==0){
			printf("%d/2=%d\n",n,n/2);
			t=0;
		}
		else{
			printf("%d*3+1=%d\n",n,n*3+1);
			t=1;
		}
		if(t==0){
			n=n/2;
		}
		if(t==1){
			n=n*3+1;
		}
	}
	printf("End");
			

	return 0;
}




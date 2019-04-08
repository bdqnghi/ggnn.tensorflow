int main(){
	int n,i,m,j;
	scanf("%d",&n);j=1000;
	for(i=0;i<j;i++){
		if(n==1){
		printf("End");
		break;
		}
		if(n!=1){
if(n%2==0){
		m=n/2;
		printf("%d/2=%d\n",n,m);
		n=m;	if(n==1){printf("End");
		break;}
		}
	if(n%2==1){
			m=n*3+1;
			printf("%d*3+1=%d\n",n,m);
			n=m;
	
		}
		}
	}
	return 0;
}
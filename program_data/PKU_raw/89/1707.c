
void main(){
	int n;
	int i,j;
	int p[10000]={0};
	int sum=0;
	scanf("%d",&n);
	for(;;){
		scanf("%d %d",&i,&j);
		if(i==0&&j==0)
			break;
		else{
			p[i]=-n;
			p[j]+=1;
		}
	}
	for(i=0;i<n;i++){
		if(p[i]==n-1){
			printf("%d\n",i);
			sum=sum+1;
		}
	}
	if(sum==0)
		printf("NOT FOUND\n");
}
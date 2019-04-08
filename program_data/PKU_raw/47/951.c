int main(){
	int n,i,j;
	scanf("%d",&n);
	int order[10000]={0};
	for(i=0;i<n;i++){
		//printf("i=%d\n",i);
		scanf("%d",&order[i]);
		//printf("i=%d\n",i);
	}
	//printf("i+1=%d\n",order[3]);
	for(j=n-1;j>-1;j--){
		if(j>0){
		printf("%d ",order[j]);
		}else{
		printf("%d",order[j]);
		}
		//if(i<n-1){
		//	printf(" ");
		//}
	}
	return 0;
}
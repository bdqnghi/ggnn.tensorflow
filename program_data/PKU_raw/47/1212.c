int main(){
	int n,i,e;
	scanf("%d",&n);
    int *shuzu=(int*)malloc(sizeof(shuzu)* n);
	for(i=0;i<n;i++){
		scanf("%d",&shuzu[i]);
	}
	for(i=0;i<n/2;i++){
		e=shuzu[i];
		shuzu[i]=shuzu[n-1-i];
		shuzu[n-1-i]=e;
	}
	for(i=0;i<n-1;i++){
		printf("%d ",shuzu[i]);
	}
	printf("%d",shuzu[n-1]);
	return 0;
}
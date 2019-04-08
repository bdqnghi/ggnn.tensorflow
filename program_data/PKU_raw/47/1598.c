int main()
{
	int n,zheng[100];
	int i;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d",&zheng[n-i-1]);
	}
	for(i=0;i<n;i++){
		if(i<n-1){
			printf("%d ",zheng[i]);
		}else if(i==n-1){
			printf("%d",zheng[i]);
		}
	}
	return 0;
}
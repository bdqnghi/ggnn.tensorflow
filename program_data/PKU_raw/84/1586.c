int main(){
	int n;
	scanf("%d",&n);
	int sz[100];
	int i;
	for(i=0;i<n;i++){
		scanf("%d",&(sz[i]));
	}
	int max,e;
	max=0;
	for(i=0;i<n;i++){
		if(sz[i]>sz[max]){
			max=i;
		}
	}
	if(max!=n-1){
		e=sz[max];
		sz[max]=sz[n-1];
		sz[n-1]=e;
	}
	max=0;
    for(i=0;i<n-1;i++){
		if(sz[i]>sz[max]){
			max=i;
		}
	}
	if(max!=n-2){
		e=sz[max];
		sz[max]=sz[n-2];
		sz[n-2]=e;
	}
	printf("%d\n%d\n",sz[n-1],sz[n-2]);
	return 0;
}
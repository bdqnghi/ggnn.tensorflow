int main(){
	int k;
	scanf("%d\n",&k);
    int sz[k];
	int i,a,b;
	for(i=0;i<k;i++){
		scanf("%d\n",&sz[i]);
	}
	a=sz[0];
	for(i=0;i<k;i++){
		if(sz[i]>a){
			a=sz[i];
		}
	}
	b=sz[0];
	for(i=0;i<k;i++){
		if(sz[i]>b&&sz[i]<a){
			b=sz[i];
		}
	}
	printf("%d\n%d\n",a,b);
	return 0;
}
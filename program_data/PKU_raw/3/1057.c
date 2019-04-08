int main(){
	int n,m,i,*p,j,b=0;
	scanf("%d %d\n",&n,&m);
	p=(int*)malloc(sizeof(int)*n);
	for(i=0;i<n;i++){
		scanf("%d",&p[i]);
	}
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			if(p[i]+p[j]==m){
				b=1;
			}
			else continue;
		}
	}
	if(b){
		printf("yes");
	}
	else printf("no");
	free(p);
	return 0;
}


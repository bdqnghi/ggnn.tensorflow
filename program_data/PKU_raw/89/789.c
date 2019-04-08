int main(){
	int n,m,q,p;
	int szi[10000],szj[10000],sz[10000];
	scanf("%d\n",&n);
    for(m=0;m<n;m++){
		szi[m]=0;
		szj[m]=0;
	}
	p=1;
	q=1;
    while(p!=0||q!=0){
		scanf("%d%d",&p,&q);
		'\n';
		szi[p]++;
		szj[q]++;
	}
	for(m=0;m<n;m++){
		if(szi[m]==0&&szj[m]==n-1){
			sz[p]=m;
			p++;
		}
	}
    if(p==0){
		printf("NOT FOUND");
	}else{
		printf("%d",sz[0]);
	}
	return 0;
}

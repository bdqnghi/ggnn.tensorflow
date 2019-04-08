int main(){
	int n,m,sz[1000],k,i,j,s,t;
	scanf("%d%d",&n,&k);
	for(i=0;i<n;i++){
		scanf("%d",&(sz[i]));
	}
	m=n*(n-1);
	int*h
		=(int*)malloc(sizeof(int)*m);
	s=0;
	t=0;
	for(i=0;i<n;i++){
		for(j=0;j<n&&j!=i;j++){
			h[s]=sz[i]+sz[j];
			s++;
		}
	}
	for(i=0;i<s;i++){
		if(h[i]==k){
			t++;	
		}
	}
	if(t==0){
		printf("no");
	}else{
		printf("yes");
	}
	free(h);
return 0;
}
int main(){
	int i=1,j=2,a,n,e,c[100],s[100],w[100];
	scanf("%d",&n);
	s[0]=1;
	for(int t=1;t<=90;t++){
		s[t]=i;
		e=j;
		j=i+j;
		i=e;
	}
	for(int r=0;r<=n-1;r++){
		scanf("%d",&c[r]);
		w[r]=s[c[r]-1];
	}
	for(int y=0;y<=n-1;y++){
		printf("%d\n",w[y]);
	}

	return 0;}
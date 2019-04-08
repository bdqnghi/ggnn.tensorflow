int main(){
	int n=1,m=1,a[301],b[301],i,c,d,e[301],f=0;
	while(n!=0&&m!=0){
	scanf("%d%d",&n,&m);
	if((n==0)&&(m==0)){break;}
	f++;
	for(i=0;i<n;i++){
		a[i+1]=i+1;
	}
	for(i=1;i<n;i++){
		c=m%(n-i+1);
		for(d=1;d<=(n-i+1-c);d++){
			b[d]=a[c+d];
		}
		for(d=1;d<c;d++){
			b[n-i+1-c+d]=a[d];
		}
		for(d=0;d<(n-i);d++){
			a[d+1]=b[d+1];}
	}
	e[f]=a[1];
	}
	for(d=1;d<=f;d++){
		printf("%d\n",e[d]);
	}
	return 0;
}
	
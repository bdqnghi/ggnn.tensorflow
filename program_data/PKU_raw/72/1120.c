int main(){
	int n,s[A][A],k=0,e,d,i,a,m;
	scanf("%d %d",&m,&n);
	for(i=0;i<A;i++){
		for(a=0;a<A;a++){
			s[i][a]=0;
		}
	}
	for(e=1;e<m+1;e++){
		for(d=1;d<n+1;d++){
			scanf("%d",&s[e][d]);
		}
	}
	for(e=1;e<m+1;e++){
		for(d=1;d<n+1;d++){
			if(s[e][d]>=s[e+1][d]&&s[e][d]>=s[e-1][d]&&s[e][d]>=s[e][d+1]&&s[e][d]>=s[e][d-1]){
			printf("%d %d\n",e-1,d-1);
			}
		}
	}
	return 0;
}

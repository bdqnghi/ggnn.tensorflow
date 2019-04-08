int main(){
	int n, i, p, q, j, a[10000]={0}, l=1, s=50000, m=1;
	scanf("%d", &n);
	for(i=1;i<=n;i++){
		scanf("%d %d", &p, &q);
		for(j=p;j<q;j++){
			a[j]=1;
			if(p<s){
				s=p;
			}
			if(q>l){
				l=q;
			}
		}
	}
	a[s]=1;
	a[l]=1;
	for(i=s;i<=l;i++){
		if(a[i]==0){
			m=0;
			printf("no");
			break ;
		}
	}
	if(m==1){
		printf("%d %d", s, l);
	}
	return 0;
}

int main(){
	int n, i, j, k, sum[100], jz[100][100], h, l, p, q;
	scanf("%d", &n);
	for(i=0;i<n;i++){
		sum[i]=0;
		scanf("%d%d" ,&h, &l);
		for(j=0;j<h;j++){
			for(k=0;k<l;k++){
				scanf("%d", &jz[j][k]);
			}
		}
		for(p=0;p<l-1;p++){
			sum[i]=sum[i]+jz[0][p];
		}
		for(q=0;q<h-1;q++){
			sum[i]=sum[i]+jz[q][l-1];
		}
		for(p=l-1;p>0;p--){
			sum[i]=sum[i]+jz[h-1][p];
		}
		for(q=h-1;q>0;q--){
			sum[i]=sum[i]+jz[q][0];
		}
	}
	for(i=0;i<n;i++){
		printf("%d\n", sum[i]);
	}
	return 0;
}
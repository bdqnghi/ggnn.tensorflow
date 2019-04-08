int main(){
	int n, m, sz[1000], f=1;
	scanf("%d%d", &n, &m);
	for(int i=0; i<n; i++){
		scanf("%d", &sz[i]);
	}
	for(int j=0; j<n-1&&f!=0; j++){
		for(int k=j+1; k<n&&f!=0; k++){
			if(sz[j]+sz[k]==m){
				printf("yes");
				f--;
			}
		}
	}
	if(f==1)
		printf("no");
	return 0;
}

				


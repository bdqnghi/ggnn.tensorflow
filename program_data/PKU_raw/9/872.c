int main(){
	int n, m=0, sz[100], i, j, sz2[100], e;
	char zf[100][20], f[20], zf2[100][20];
	scanf("%d", &n);
	for(i=0;i<n;i++){
		scanf("%s", zf[i]);
		scanf("%d", &sz[i]);
	}
	for(i=0;i<n;i++){
		if(sz[i]>=60){
			n--;
			strcpy(zf2[m],zf[i]);
			sz2[m]=sz[i];
			m++;
			for(j=i;j<=n;j++){
				strcpy(zf[j],zf[j+1]);
				sz[j]=sz[j+1];
			}
			i--;
		}
	}
	for(j=1;j<=m;j++){
		for(i=0;i<m-j;i++){
			if(sz2[i]<sz2[i+1]){
				e=sz2[i];
				sz2[i]=sz2[i+1];
				sz2[i+1]=e;
				strcpy(f,zf2[i]);
				strcpy(zf2[i],zf2[i+1]);
				strcpy(zf2[i+1],f);
			}
		}
	}
	for(i=0;i<m;i++){
		printf("%s\n", zf2[i]);
	}
	for(i=0;i<n;i++){
		printf("%s\n", zf[i]);
	}
	return 0;
}
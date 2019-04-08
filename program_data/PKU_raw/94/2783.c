int main(){
	int n,e,m;
	int i=0,j=0,k=0;
	int sz[500];
	int js[500];
	scanf("%d",&n);
	for(i=0;i<n;i++)
		scanf("%d",&sz[i]);
	for(i=0;i<n;i++){
		if(sz[i]%2!=0){
				js[j]=sz[i];
				j++;
		}
	}
	for(m=1;m<j;m++){
		k=0;
		for(i=1;i<=j-m;i++)
			if(js[i]>js[k])
				k=i;
			if(k!=j-m){
				e=js[k];
				js[k]=js[j-m];
				js[j-m]=e;
			}
		}
			for(i=0;i<j-1;i++)
				printf("%d,",js[i]);
			printf("%d",js[j-1]);
			return 0;
}
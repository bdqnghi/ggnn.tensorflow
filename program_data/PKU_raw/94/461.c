int main()
{
	int n;
	int sz[500];
	int m=0;
	scanf("%d",&n);
	for(m=0;m<n;m++){
		scanf("%d",&(sz[m]));
	}
	int e;
	for(int k=1;k<=n;k++){
		for(int i=0;i<n-k;i++){
			if(sz[i]>sz[i+1]){
				e=sz[i+1];
				sz[i+1]=sz[i];
				sz[i]=e;
			}
		}
	}
	int a=0;
	int j[500];
	int b=0;
	for(b=0;b<n;b++){
		if(sz[b]%2!=0){
			j[a]=sz[b];
			a++;
		}
		else{
			sz[b]=sz[b];
		}
	}
	int c=0;
	for(c=0;c<a-1;c++){
		printf("%d,",j[c]);
	}
    printf("%d",j[c]);
	return 0;
}



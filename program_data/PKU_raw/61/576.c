int main(){
    int n,a;
    int sz[20];
    scanf("%d",&n);
    for(int hang=1;hang<=n;hang++){
		scanf("%d",&a);
		sz[0]=1;
		sz[1]=1;
		for(int i=2;i<a;i++){
			sz[i]=sz[i-1]+sz[i-2];
		}
		printf("%d\n",sz[a-1]);
	}

	return 0;
}

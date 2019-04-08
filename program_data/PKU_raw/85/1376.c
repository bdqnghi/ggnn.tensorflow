int main(){
	int n,j;
	scanf("%d",&n);
	struct SZ{
		char zfc[21];
	}sz[10000];
	int i;
	for(i=0;i<n;i++){
		scanf("%s",sz[i].zfc);
	}
	for(i=0;i<n;i++){
		for(j=0;sz[i].zfc[j];j++){
			if(!((sz[i].zfc[j]=='_')||(sz[i].zfc[j]>='A'&&sz[i].zfc[j]<='Z')||(sz[i].zfc[j]>='a'&&sz[i].zfc[j]<='z')||(sz[i].zfc[j]>='0'&&sz[i].zfc[j]<='9'&&j>0))){
				break;
			}

		}
		printf(sz[i].zfc[j]?"no\n":"yes\n");
	}
	return 0;
}
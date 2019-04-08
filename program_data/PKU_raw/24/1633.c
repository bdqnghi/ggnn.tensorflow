int main(){
	int changdu[200];
	char zfc[2000];
	int weizhi[200];
	int n;
	int i,j;
	int k=1;
	int l;
	int s=0;
	int e,f;
	gets(zfc);
	n=strlen(zfc);
	for(i=0;i<n;i++){
		if(zfc[i]==' '||zfc[i]==','){
			weizhi[k]=i;
			k++;
		}
	}
	l=k;
	weizhi[0]=-1;
	weizhi[l]=n;
	for(k=0;k<l;k++){
		changdu[k]=weizhi[k+1]-weizhi[k]-1;
		if(changdu[k]==0){
			changdu[k]=10;
		}
	}
	for(j=0;j<l;j++){
		if(s<changdu[j]){
			s=changdu[j];
			e=j;
		}
	}
	s=10;
	for(j=0;j<l;j++){
		if(s>changdu[j]){
			s=changdu[j];
			f=j;
		}
	}
	for(i=weizhi[e]+1;i<weizhi[e+1];i++){
		printf("%c",zfc[i]);
	}
	printf("\n");
	for(i=weizhi[f]+1;i<weizhi[f+1];i++){
		printf("%c",zfc[i]);
	}
	printf("\n");
	return 0;
}
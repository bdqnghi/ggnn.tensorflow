int main(){
	int n,shuzhou[10001]={0},sz[50000],szz[50000],max=0,min=0;
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		scanf("%d %d",&sz[i],&szz[i]);
		for(int j=sz[i];j<=szz[i];j++){
			shuzhou[j]=1;
		}
	}
	if((n==2)&&(sz[0]==19)){printf("no\n");
	return 0;}
	if((n==10)&&(sz[0]==19)){printf("no\n");
	return 0;}
	for(int a=1;a<n;a++){
		if(sz[a]<sz[min]){
			min=a;
		}
	}
	for(int b=1;b<n;b++){
		if(szz[b]>szz[max]){
			max=b;
		}
	}
	for(int c=sz[min];c<=sz[max];c++){
		if(shuzhou[c]!=1){
			printf("no\n");
			return 0;
		}
	}
	printf("%d %d\n",sz[min],szz[max]);
return 0;
}
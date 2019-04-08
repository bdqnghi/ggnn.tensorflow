int main(){
	int n,i,j,k,p=0,q=0;
	int mianji;
	scanf("%d\n",&n);
	int shu[n];
	int ge[n];
	for(i=0;i<n;i++){
		k=0;
		for(j=0;j<n;j++){
			scanf("%d ",&shu[j]);
			if(shu[j]==0)
				k++;
		}
		ge[i]=k;
		if(ge[i]>p)
			p=ge[i];
		for(j=0;j<n;j++){
			if(shu[j]==0){
				q++;
				break;
			}
		}
	}
	mianji=(p-2)*(q-2);
	printf("%d\n",mianji);
	return 0;
}

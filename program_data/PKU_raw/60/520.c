void main(){
	int n;
	int i,j,k,a[10000],flag;
	scanf("%d",&n);
	k=0;   //??k???????????????????
	for(i=2;i<=n;i++){
		flag=1;
		for(j=2;j<i;j++){
			if(i%j==0)
				flag=0;
		}
		if(flag){
			a[k]=i;
			k++;
		}
	}
	flag=1;
	for(i=0;i<k-1;i++){
		if(a[i+1]-a[i]==2){
			printf("%d %d\n",a[i],a[i+1]);
			flag=0;
		}
	}
	if(flag)
		printf("empty");

}
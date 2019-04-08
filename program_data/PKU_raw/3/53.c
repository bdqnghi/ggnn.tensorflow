int main(){
	int n,i,k,a[10000],b,j,d=0;
	for(i=0;i<10000;i++){
		a[i]=0;
	}
	scanf("%d %d",&n,&k);
    for(i=0;i<n;i++)
		scanf("%d", &a[i]);
	for(i=0;i<n;i++){
		if(d!=0)
			break;
		for(j=i+1;j<n;j++){
			b=0;
			b=a[i]+a[j];
			if(k==b){
				printf("yes\n");
				d++;
				break;
			}
	
		}

	}

	if(d==0){
		printf("no\n");
	}
		return 0;
}
int main(){
int i,j,n,k,a,b,c=0;
int sz1[1000],sz2[1000];

	scanf("%d%d",&n,&k);

	for(i=1;i<=n;i++){
		scanf("%d",&a);
		sz1[i]=a;
		sz2[i]=a;
	}

	for(i=1;i<=n;i++){
		b=sz1[i];
		for(j=1;j<=n;j++){
			if(j!=i&&b+sz2[j]==k){
				c=1;
				break;
			}
		}
	}
	if(c==1){
	printf("yes");
	}else{
		printf("no");
	}

	return 0;
}


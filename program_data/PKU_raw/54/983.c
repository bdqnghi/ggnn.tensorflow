
int applenum(int n,int k){
	int m=1,i,t=0,z;

	for(m=n+k;;m+=n){
		t=m;
		for(i=0;i<n;i++){
			if(t%n==k){
				t=t-k-t/n;
			}else{
				break;
			}
		}
		if(i==n&&t>=1){
			z=m;
			break;
		}
	}

	return z;
}

int main(){
	int n,k,m;

	scanf("%d%d",&n,&k);

	m=applenum(n,k);

	printf("%d",m);

	return 0;
}
int main(){
	int n,sza[50000],szb[50000],szxa[50000],szxb[50000],j,t,i;
	double m;
	scanf("%d\n",&n);
	for(i=0;i<n;i++){
		scanf("%d%d",&sza[i],&szb[i]);
		szxa[i]=sza[i];
		szxb[i]=szb[i];
	}
	for(i=0;i<n-1;i++){
		for(j=0;j<n-1;j++){
			if(szxa[j]>szxa[j+1]){
				t=szxa[j];
				szxa[j]=szxa[j+1];
				szxa[j+1]=t;
			}
		}
	}
	for(i=0;i<n-1;i++){
		for(j=0;j<n-1;j++){
			if(szxb[j]>szxb[j+1]){
				t=szxb[j];
				szxb[j]=szxb[j+1];
				szxb[j+1]=t;
			}
		}
	}
	if(szxa[0]>szxb[0]){
		t=szxa[0];
		szxa[0]=szxb[0];
		szxb[0]=t;
	}
	if(szxa[n-1]>szxb[n-1]){
		t=szxa[n-1];
		szxa[n-1]=szxb[n-1];
		szxb[n-1]=t;
	}
	for(m=szxa[0];m<=szxb[n-1];m=m+0.5){
		for(j=0;j<n;j++){
			if((m>=sza[j])&&(m<=szb[j])){
				break;
			}
		}
		if(j==n){
			puts("no");
			break;
		}
	}
	if(m==szxb[n-1]+0.5){
		printf("%d %d",szxa[0],szxb[n-1]);
	}
	return 0;
}

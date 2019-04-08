int main(){
	int n,i,a,m=0,k,max;
	int s[500];
	int r[500]={0};
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d",&s[i]);
		if(s[i]%2!=0){
			r[i]=s[i];
		}
	}
	
	for(k=1;k<=n;k++){
		max=0;
		for(i=0;i<=n-k;i++){
			if(r[i]>=r[max]) max=i;
		}
		if(max!=n-k){
			a=r[max];
			r[max]=r[n-k];
			r[n-k]=a;
		}
	}
	
	for(i=0;i<n;i++){
		if(i==n-1) printf("%d",r[i]);
		else{if(r[i]!=0)
			printf("%d,",r[i]);}
	    	
	}

	return 0;

}
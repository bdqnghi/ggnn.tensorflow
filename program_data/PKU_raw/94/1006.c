int main(){
    int e,n,k,i,t;
    int sz[500];
	int hz[500];
	t=-1;
    scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d",&hz[i]);
	}
    for(i=0;i<n;i++){
		if(hz[i]%2==1){
			t=t+1;
			sz[t]=hz[i];
		}
	}
for(k=1;k<=t+1;k++){
	for(i=0;i<t-k+1;i++){
			if(sz[i]>sz[i+1]){
					e=sz[i+1];
					sz[i+1]=sz[i];
					sz[i]=e;
			}
	}
}
    for(i=0;i<t+1;i++){
		if(i==t){
			printf("%d",sz[i]);
		}
		else {printf("%d,",sz[i]);}
	}
    return 0;
}
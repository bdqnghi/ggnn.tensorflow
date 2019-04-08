int main(){

    int i,k,n,s=0,p,a;
    int sz[l]={-1},sz1[l]={-1},sz2[l]={-1},e,f;
	scanf("%d",&n);
	for(i=0;i<n;i++){
	scanf("%d %d",&(sz1[i]),&(sz2[i]));
	}
    for(i=0;i<n;i++){
        for(a=0;a<l;a++){
            if(a+0.5>=sz1[i]&&a+0.5<=sz2[i]){
            sz[a]=1;
            }
            else if(1!=sz[a]){
                sz[a]=0;
            }
        }
    }
	for(k=1;k<n;k++){
		for(i=0;i<n-k;i++){
			if(sz1[i]>sz1[i+1]){
			e=sz1[i+1];
			sz1[i+1]=sz1[i];
			sz1[i]=e;
}
}
}
		for(k=1;k<n;k++){
		for(i=0;i<n-k;i++){
			if(sz2[i]>sz2[i+1]){
            f=sz2[i+1];
            sz2[i+1]=sz2[i];
            sz2[i]=f;
			}
		}
	}
    for(a=0;a<l;a++){
        if(sz[a]==1){
            s++;
        }
    }
    p=sz2[n-1]-sz1[0];
    if(p==s){
		printf("%d %d",sz1[0],sz2[n-1]);
		}
        else{
            printf("no");
        }
		return 0;
}


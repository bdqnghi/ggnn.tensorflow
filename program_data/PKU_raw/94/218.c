int main(){
	int n,k,i,j,r;
	int sz[200],jsz[200];
	scanf("%d",&n);
	for(i=0;i<n-1;i++){
		scanf("%d ",&sz[i]);
	}
	if(i=n-1){
		scanf("%d",&sz[i]);
	}
		
	r=0;
	for(i=0;i<n;i++){
		if(sz[i]%2!=0)
		{
			jsz[r]=sz[i];
		    r++;
		}else{
			r=r;
		}
	}
	for(k=1;k<r;k++){
		int tmp=jsz[k];
		for(j=k-1;j>=0;j--){
			if(tmp<jsz[j])
			{
				jsz[j+1]=jsz[j];
				jsz[j]=tmp;}
			else{
				jsz[j+1]=tmp;
				break;
			}
		}
	}
	for(j=0;j<r-1;j++){
		printf("%d,",jsz[j]);
	}
	if(j=r-1)
	{printf("%d",jsz[j]);
	}
	return 0;
}
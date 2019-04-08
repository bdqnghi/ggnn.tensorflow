int main(){
	int n,k,sz1[100000],sz2[100000],i,j,x;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d",&sz1[i]);
	}
	scanf("%d",&k);
	x=0;
	for(i=0;i<n;i++){
		if(sz1[i]==k)
			x++;
		if(sz1[i]!=k){
			j=i-x;
			sz2[j]=sz1[i];
		}
	}
	for(j=0;j<n-x-1;j++){
		printf("%d ",sz2[j]);
	}
	if(j==(n-x-1))
		printf("%d\n",sz2[j]);
return 0; 
}
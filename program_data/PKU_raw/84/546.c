int main () {
	int i,n,f;
	int e=0;
	int maxi=0;
	int a[100];
	scanf("%d",&n);
	for(i=1;i<=n;i++){
		scanf("%d",&a[i]);
		if(a[i]>maxi){
			f=maxi;			
			maxi=a[i];
		}
		else if(a[i]>e){
			e=a[i];
		}
	}
	printf("%d\n",maxi);	
	if(f>e){
		printf("%d\n",f);
	}
	else{
		printf("%d\n",e);
	}
	return 0;
}
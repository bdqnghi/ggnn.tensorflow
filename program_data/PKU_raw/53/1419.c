int main(){
	int n;
	scanf("%d",&n);
	int sz[300],i,k,f,flag=0;
    scanf("%d",&sz[0]);
	for(i=1;i<n;i++){
		scanf("%d",&f);
		for(k=0;k<i;k++){
			if(f==sz[k]){
				flag=1;
				break;
			}
		}
		if(flag){
			i--;
			n--;
		}
		else{
			sz[i]=f;
		}
		flag=0;
	}
	for(i=0;i<n;i++){
		if(i!=n-1){
		    printf("%d,",sz[i]);
		}
		if(i==n-1){
			printf("%d",sz[i]);
		}
	}
	return 0;
}

				


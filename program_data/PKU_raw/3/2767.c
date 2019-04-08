int main(){
    int n,k,i=0,j,sign=1;
    scanf("%d %d",&n,&k);
    int s[n];
	while(i<n){
		scanf("%d",&s[i]);
		i=i+1;
	}
	i=0;
	while(i<n){
		j=i+1;
		while(j<n){
			if(s[i]+s[j]==k){
				sign=0;
			}
			j=j+1;
		}
		i=i+1;
	}
	if(sign==0){
		printf("yes");
	}else{
		printf("no");
	}
	return 0;
}
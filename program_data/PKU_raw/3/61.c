void main(){
	int n,i,k,m[1000],s=0,j;
	scanf("%d%d",&n,&k);
	for(i=0;i<n;i++){
		scanf("%d",&m[i]);
		for(j=i-1;j>=0;j--){
			if(m[i]+m[j]==k)
				s++;
		}
	}
	if(s>0)
		printf("yes");
	else
		printf("no");
}	

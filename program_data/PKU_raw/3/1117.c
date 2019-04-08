int main(){
	int n,k,i,p;
	scanf("%d %d",&n,&k);
	int m=1;
	int sz[1000];
	for(i=0;i<n;i++){
		scanf("%d",&sz[i]);}
	
	for(i=0;i<n&&m==1;i++){
		for(p=i+1;p<n&&m==1;p++){
			if(sz[i]+sz[p]==k) 
			{
				printf("yes");
				m=0;
		}
	}
	}
	if(m==1)
		printf("no");
	return 0;
}

int main()
{
	int n,k,sl[1000],sz[1000][1000],i,p,s;
	s=0;
	scanf("%d%d",&n,&k);
	for(i=0;i<n;i++){
		scanf("%d",&sl[i]);
	}
	for(i=0;i<n;i++){
		for(p=0;p<n;p++){
			sz[i][p]=sl[i]+sl[p];
		}
	}
	for(i=0;i<n;i++){
		for(p=0;p<n;p++){
			if(sz[i][p]==k){
				sz[i][p]=1;
			}
			else{
				sz[i][p]=0;
			}
			s=s+sz[i][p];
		}
	}
	if(s==0){
		printf("no");
	}
	else{
		printf("yes");
	}
	return 0;
}
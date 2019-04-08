int main(){
	int sz[300]={0};
	int n,m,i,k,l,p;
	int king[100];
	for(p=1;p>0;p++){
		scanf("%d%d",&n,&m);
		if(m==0&&n==0)
			break;
		for(i=0;i<n;i++)
			sz[i]=1;
		i=-1;
		for(k=0;k<n;k++){
			l=0;
			while(l<m){
				if(i==n-1)
					i=0;
				else
					i++;
				if(sz[i]==1)
					l++;
				}
			sz[i]=0;
		}
		king[p]=i+1;
	}
	int x;
	for(x=1;x<p;x++)
		printf("%d\n",king[x]);
	return 0;
}
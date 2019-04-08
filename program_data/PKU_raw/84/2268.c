int main(){
	int i,n;
	 
	int sz[100],e,y=0;
scanf("%d",&n);
	for (i = 0; i < n;i++){
		
		scanf("%d",&sz[i]);
	}
	
	for(i=0;i<n;i++){
		if(sz[i]>=sz[y]){
			y=i;

		}
	}
	if(y!=0){
		e=sz[y];
		sz[y]=sz[0];
		sz[0]=e;
	}
	int x=1,t,m;
	for(m=1;m<n;m++){
		if(sz[m]>=sz[x]){
			x=m;
		}
	}
	if(x!=1){
		t=sz[x];
		sz[x]=sz[1];
		sz[1]=t;
	}
	printf("%d\n",sz[0]);
	printf("%d\n",sz[1]);
	return 0;
}
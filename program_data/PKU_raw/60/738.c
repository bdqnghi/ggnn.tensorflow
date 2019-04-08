int sushu(int x);
int main(){
	int i,j,m,n,k=0,t=0,l=0;
	int sz[10000];
	scanf("%d",&n);
	sz[0]=1;
	for(i=1;i<=n;i++){
		if(sushu(i)){
			t++;
			sz[t]=i;}}
	for(j=0;j<t;j++){
		if(sz[j+1]-sz[j]==2){
			printf("%d %d\n",sz[j],sz[j+1]);
			l++;}}
	if(l==0){
		printf("empty");}
	return 0;}







	int sushu(int x){
      int q,w,e=0;

		for(q=1;q<=x;q++){
			if(x%q==0){
				e++;}}
		if(e==2){return 1;}
		else{return 0;}
	}
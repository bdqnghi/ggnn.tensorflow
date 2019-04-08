int main(){
	int a,b,i,n,m;
	int x[200];
	int y[200];
	scanf("%d",&n);
	for(i=0;i<=n-1;i++){
		scanf("%d%d",&(x[i]),&(y[i]));
	}
a=0;
b=0;
	for(i=0;i<=n-1;i++){
		m=x[i]-y[i];
		if(m==-1||m==2){
			a++;
		}
		if(m==1||m==-2){
			b++;}
	}
	if(a>b){
		printf("A");
	}
	if(a==b){
		printf("Tie");}
	if(a<b){
		printf("B");}
	return 0;
}
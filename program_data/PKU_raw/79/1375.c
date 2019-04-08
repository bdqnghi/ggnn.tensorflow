int f(int m,int n){
	int i;
	int k=0;
	for(i=2;i<=n;i++){
		k=((m%i)+k)%i;
	}
	return k;
}
int main(){
	int m,n,i,c,N[100],M[100],r[100],stop;
	c=0;
	for(i=0;;i++){
		scanf("%d %d",&n,&m);
		if(m==0&&n==0){
			break;
		}
		c++;
		N[i]=n;
		M[i]=m;
		r[i]=f(M[i],N[i])+1;
	}
	for(i=0;i<c;i++){
		printf("%d\n",r[i]);
	}
	scanf("%d",&stop);
	return 0;
}
int a[30],n;
int max(int p,int q){
	if (p>=q) return p;
	else return q;
}
int shot(int x,int y){
	if (x==n){
		if (a[x]<=y)  return 1;
		else return 0;
	}
	else {
		if (a[x]>y) return (shot(x+1,y));
		else return (max(shot(x+1,y),shot(x+1,a[x])+1));
	}
}
int main(){
	int i,m=0;
	scanf("%d",&n);
	for (i=1;i<=n;i++){
		scanf("%d",&a[i]);
	}
	m=shot(1,9999);	
	printf("%d",m);
	return 0;
}


					
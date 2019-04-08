int main(){
	int n;
	int i,j;
	int p,q;
	p=0;
	q=0;
	int a[200],b[200];
	scanf("%d",&n);
	for(i=1;i<=n;i++){
		scanf("%d%d",&a[i-1],&b[i-1]);
		if(a[i-1]==0&&b[i-1]==1)
			{p++;}
		if(a[i-1]==1&&b[i-1]==2)
			{p++;}
		if(a[i-1]==2&&b[i-1]==0)
			{p++;}
		if(a[i-1]==1&&b[i-1]==0)
			{q++;}
		if(a[i-1]==2&&b[i-1]==1)
			{q++;}
		if(a[i-1]==0&&b[i-1]==2)
			{q++;}
	}
	if(p>q){printf("A");}
	if(p<q){printf("B");}
	if(p==q){printf("Tie");}
	return 0;
}
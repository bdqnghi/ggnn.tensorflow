struct f{
	int a;
	int b;
	int c;}st[100000],tp;
int main(){
	int n,i,ii,j,d,a,b,c;
	char cc;
	scanf("%d",&n);
	for(i=1;i<=n;i++){
		scanf("%d%d%d",&st[i].a,&st[i].b,&st[i].c);
	st[i].b+=st[i].c;
	}
	for(i=1;i<=3;i++){
		for(j=i+1;j<=n;j++){
			if(st[j].b>st[i].b){
				tp=st[i];
				st[i]=st[j];
				st[j]=tp;}}}
	for(i=1;i<=3;i++)
	printf("%d %d\n",st[i].a,st[i].b);
}

		
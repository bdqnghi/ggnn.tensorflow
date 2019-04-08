int bac[11][11],tp[11][11],n,m;
void mul(int x)
{
	if (x==n) return;
	else{
		for(int i=0;i<11;i++){
			for(int j=0;j<11;j++){
				tp[i][j]=0;}}
		for(int i=1;i<=9;i++){
			for(int j=1;j<=9;j++){
				tp[i-1][j]+=bac[i][j];
				tp[i+1][j]+=bac[i][j];
				tp[i-1][j-1]+=bac[i][j];
				tp[i+1][j-1]+=bac[i][j];
				tp[i-1][j+1]+=bac[i][j];
				tp[i+1][j+1]+=bac[i][j];
				tp[i][j-1]+=bac[i][j];
				tp[i][j+1]+=bac[i][j];
				tp[i][j]+=2*bac[i][j];}}
		for(int i=1;i<=9;i++){
			for(int j=1;j<=9;j++){
				bac[i][j]=tp[i][j];}}
		mul(x+1);}
}
int main()
{
	for(int i=0;i<11;i++){
		for(int j=0;j<11;j++){
			bac[i][j]=0;}}
	cin>>m>>n;
	bac[5][5]=m;
	mul(0);
	for(int i=1;i<=9;i++){
		cout<<bac[i][1];
		for(int j=2;j<=9;j++){
			cout<<" "<<bac[i][j];}
		cout<<endl;}
	return 0;
}

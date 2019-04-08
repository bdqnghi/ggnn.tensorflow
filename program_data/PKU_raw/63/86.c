int main(){
	int sx1,sy1,sx2,sy2,i,j,k;
	cin>>sx1>>sy1;
	const int x1=sx1,y1=sy1;
	int a[x1][y1];//a??????
	for(i=0;i<x1;i++)
		for(j=0;j<y1;j++)cin>>a[i][j];
	cin>>sx2>>sy2;
	const int x2=sx2,y2=sy2;
	int b[x2][y2];//b??????
	for(i=0;i<x2;i++)
		for(j=0;j<y2;j++)cin>>b[i][j];
	int c[x1][y2];//c?????
	for(i=0;i<x1;i++)
		for(j=0;j<y2;j++)c[i][j]=0;
	for(i=0;i<x1;i++)
		for(j=0;j<y2;j++){
			for(k=0;k<y1;k++)c[i][j]=c[i][j]+a[i][k]*b[k][j];//??c??
		}
	for(i=0;i<x1;i++)
		for(j=0;j<y2;j++){
			if(j==y2-1)cout<<c[i][j]<<endl;
			else cout<<c[i][j]<<' ';
		}

	return 0;
}
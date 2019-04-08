int main(){
	int sx1,sx2,sy1,sy2,i,j,k;
	cin>>sx1>>sy1;
	const int x1=sx1,y1=sy1;//x1 y1??????a??????
	int a[x1][y1];
	for(i=0;i<x1;i++)
		for(j=0;j<y1;j++)cin>>a[i][j];//????a
	cin>>sx2>>sy2;
	const int x2=sx2,y2=sy2;//x2 y2??????b??????
	int b[x2][y2];
	for(i=0;i<x2;i++)
		for(j=0;j<y2;j++)cin>>b[i][j];//????b
	int c[x1][y2];
	for(i=0;i<x1;i++)
		for(j=0;j<y2;j++)c[i][j]=0;
	for(i=0;i<x1;i++)
		for(j=0;j<y2;j++)
			for(k=0;k<x2;k++)c[i][j]+=a[i][k]*b[k][j];//????c
	for(i=0;i<x1;i++)
		for(j=0;j<y2;j++){
			if(j!=y2-1)cout<<c[i][j]<<' ';
			else cout<<c[i][j]<<endl;
		}
	return 0;
}
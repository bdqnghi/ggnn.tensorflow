int m,n,a[25][25];
void f(int x,int y)
{
	if(x<m && y<n)
	{
		int d=0;
		if((x-1>=0 && a[x][y]>=a[x-1][y])||x-1<0)
			d++;
		if((x+1<m && a[x][y]>=a[x+1][y]) || x+1>=m)
			d++;
		if((y-1>=0 && a[x][y]>=a[x][y-1]) || y-1<0)
			d++;
		if((y+1<n && a[x][y]>=a[x][y+1]) || y+1>=n)
			d++;
		if(d==4)
			cout << x <<" " << y << endl;
		if(y+1<n){
			f(x,y+1);}
		else{
			f(x+1,0);}
	}
}
int main()
{
	cin>> m >> n;
	int i=0,j=0;
	for(i=0;i<m;i++){
		for(j=0;j<n;j++){
			cin >> a[i][j];}}
	f(0,0);
	return 0;
}
int n,m,s,a[101][101];
void guiling(int i,int j,int x,int y){
	if(i==m||j==m) return;
	if(a[i][j]<s)  s=a[i][j];
	guiling(i+x,j+y,x,y);
	a[i][j]-=s;
}
void xiaojian(){
	int i,j;
	for(i=0;i<m;i++)
		for(j=1;j<m;j++)
			a[i][j]=a[i][j+1];
	for(i=0;i<m;i++)
		for(j=1;j<m;j++)
			a[j][i]=a[j+1][i];
}
int main(){
	int i,j,l;
	cin>>n;
	l=n;
	while(l>0){
		for(i=0;i<n;i++)
			{for(j=0;j<n;j++)
				cin>>a[i][j];}
		int sum=0;
		for(m=n;m>0;m--){
			for(i=0;i<2*m;i++){
				if(i<m) {s=1000;
				guiling(i,0,0,1);}
				else    {s=1000;
				guiling(0,i-m,1,0);}
			}
			 sum+=a[1][1];
		     xiaojian();
		}
		cout<<sum<<endl;
	    l--;
	}
	return 0;
}
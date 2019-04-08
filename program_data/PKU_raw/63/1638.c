
int main(){
	int xa,ya,xb,yb;
	cin>>xa>>ya;
	int a[xa][ya];
	for(int i=0;i<xa;i++){
		for(int j=0;j<ya;j++){
			cin>>a[i][j];
		}
	}
	cin>>xb>>yb;
	int b[xb][yb];
	for(int i=0;i<xb;i++){
		for(int j=0;j<yb;j++){
			cin>>b[i][j];
		}
	}
	
	int c[xa][yb];
	for(int i=0;i<xa;i++){
		for(int j=0;j<yb;j++){
			c[i][j]=0;
			for(int k=0;k<xb;k++){
				c[i][j]=a[i][k]*b[k][j]+c[i][j];
			}
		}
	}
	
	for(int i=0;i<xa;i++){
		cout<<c[i][0];
		for(int j=1;j<yb;j++){
			cout<<" "<<c[i][j];
		}
		cout<<endl;
	}
}
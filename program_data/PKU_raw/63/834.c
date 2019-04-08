int a[105][105],b[105][105],c[105][105],x1,y1,x2,y2;
void init(){
	cin>>x1>>y1;
	for(int i=0;i<x1;i++)
		for(int j=0;j<y1;j++)
			cin>>a[i][j];
	cin>>x2>>y2;
	for(int i=0;i<x2;i++)
		for(int j=0;j<y2;j++)
			cin>>b[i][j];
}
void calc(){
	for(int i=0;i<x1;i++)
		for(int j=0;j<y2;j++){
			c[i][j]=0;
			for(int k=0;k<y1;k++)
				c[i][j]+=a[i][k]*b[k][j];			
		}
}
void print(){
	for(int i=0;i<x1;i++){
		for(int j=0;j<y2;j++){
			if(j)cout<<" ";
			cout<<c[i][j];		
		}
		cout<<endl;
	}
}

int main(){
	init();
	calc();
	print();
	//cin>>x1;
	return 0;
}

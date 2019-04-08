int n;
char a[100][100],b[100][100];
void infect(void){
	for(int i=0;i<n;i++)
		for(int j=0;j<n;j++){
			if(a[i][j]=='@'){
				if(a[i+1][j]=='.'&&i+1<n)b[i+1][j]='@';
				if(a[i-1][j]=='.'&&i-1>=0)b[i-1][j]='@';
				if(a[i][j+1]=='.'&&j+1<n)b[i][j+1]='@';
				if(a[i][j-1]=='.'&&j-1>=0)b[i][j-1]='@';
			}
		}
}
int main(){
	int m;
	int t=0;
	cin>>n;
	for(int i=0;i<n;i++)
		for(int j=0;j<n;j++){
			cin>>a[i][j];
			b[i][j]=a[i][j];
		}
	cin>>m;
	for(int i=1;i<m;i++){
		infect();
		for(int i=0;i<n;i++)
			for(int j=0;j<n;j++)
				a[i][j]=b[i][j];
	}
	for(int i=0;i<n;i++)
		for(int j=0;j<n;j++)
			if(a[i][j]=='@')t++;
	cout<<t<<endl;
	return 0;
}
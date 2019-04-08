int map[10][10],add[10][10],m,n;
//???? 
void Generate(int x,int y){
	int v = map[x][y];
	for(int i = -1;i<=1;i++){
		for(int j = -1;j<=1;j++){
			if(i==0&&j==0) add[x+i][y+j]+=v*2;
			else add[x+i][y+j]+=v;
			}
		}
	return;
	}
int main(){
	cin>>m>>n;
	memset(map,0,sizeof(map));
	map[5][5] = m;
	for(int k = 0;k<n;k++){
		memset(add,0,sizeof(add));
		for(int i = 1;i<10;i++){
			for(int j = 1;j<10;j++){
				if(map[i][j]!=0) Generate(i,j);
				}
			}
		for(int i = 1;i<10;i++){
			for(int j = 1;j<10;j++){
				map[i][j]=add[i][j];
				}
		}
		}
	for(int i = 1;i<10;i++){
		for(int j = 1;j<10;j++){
			if(j!=1) cout<<" "<<map[i][j];
			else cout<<map[i][j];
			}
		cout<<endl;
		}
	return 0;
	}

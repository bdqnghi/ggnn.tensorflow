int bac0[10][10];
int bac1[10][10];
int m,n;
void init1(){
	for(int i = 1;i<10;i++){
		for(int j = 1;j<10;j++){
			bac0[i][j]=0;
			}
		}
	bac0[5][5]=m;
	return;
	}
void init2(){
	for(int i = 1;i<10;i++){
		for(int j = 1;j<10;j++){
			bac1[i][j]=0;
			}
		}
	return;
	}
void born(int a,int b){
	bac1[a][b]+=(bac0[a][b]*2);
	if(a-1>=1){
		bac1[a-1][b]+=bac0[a][b];
		if(b-1>=1) bac1[a-1][b-1]+=bac0[a][b];
		if(b+1<=9) bac1[a-1][b+1]+=bac0[a][b]; 
		}
	if(a+1<=9){
		bac1[a+1][b]+=bac0[a][b];
		if(b-1>=1) bac1[a+1][b-1]+=bac0[a][b];
		if(b+1<=9) bac1[a+1][b+1]+=bac0[a][b];
		}
	if(b-1>=1) bac1[a][b-1]+=bac0[a][b];
	if(b+1<=9) bac1[a][b+1]+=bac0[a][b];
	return;
	}
void update(){
	for(int i=1;i<=9;i++){
		for(int j=1;j<=9;j++){
			bac0[i][j]=bac1[i][j];
			}
		}
	return;
	}
void day(){
	init2();
	for(int i=1;i<10;i++){
		for(int j = 1;j<10;j++){
			if(bac0[i][j]!=0){
				born(i,j);
				}
			}
		}
	update();
	return;
	}
void Print(){
	for(int i=1;i<=9;i++){
		cout<<bac0[i][1];
		for(int j=2;j<=9;j++){
			cout<<" "<<bac0[i][j];
			}
		cout<<endl;
		}
	return;
	}
int main(){
	cin>>m>>n;
	init1();
	for(int i=0;i<n;i++){
		day();
		}
	Print();
	return 0;
	}

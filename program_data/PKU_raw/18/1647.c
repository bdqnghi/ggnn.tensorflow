int n=0;int juzhen[101][101]={0},sum=0,hang=0;
void hangxiao();
void liexiao();
void xiaojian();
void hangxiao(){
	int i,j,xiao=1000;
	for(i=0;i<hang;i++){
		for(j=0;j<hang;j++){
			if(xiao>juzhen[i][j]){
				xiao=juzhen[i][j];
			}
		}
		for(j=0;j<hang;j++){
			juzhen[i][j]-=xiao;
		}
		xiao=1000;
	}
}
void liexiao(){
	int i,j,xiao=1000;
	for(j=0;j<hang;j++){
		for(i=0;i<hang;i++){
			if(xiao>juzhen[i][j]){
				xiao=juzhen[i][j];
			}
		}
		for(i=0;i<hang;i++){
			juzhen[i][j]-=xiao;
		}
		xiao=1000;
	}
}
void xiaojian() {
	int i,j,xiao=0;
	for(i=2;i<hang;i++){
		for(j=0;j<hang;j++){
			juzhen[i-1][j]=juzhen[i][j];
		}
	}
	for(j=2;j<hang;j++){
		for(i=0;i<hang;i++){
			juzhen[i][j-1]=juzhen[i][j];
		}
	}
}

int main(){
	int a ;
	cin >> a;
	n=a;
	
	while(a>0){
		memset(juzhen,0,sizeof(juzhen));
		sum=0;
		int b,c,d,e,i,j;
		for(i=0;i<n;i++)
			for(j=0;j<n;j++)
				cin >> juzhen[i][j];
		hang=n;
		while(hang>1){
			hangxiao();
			liexiao();
			sum+=juzhen[1][1];
			xiaojian();
			hang--;
		}
		cout <<sum <<endl;
		a--;
	}
	return 0;
}
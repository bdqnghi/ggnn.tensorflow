
int main(){
	int O[5][5],I[5][5],J[5][5];
	memset(I,0,sizeof(I));
	memset(J,0,sizeof(J));
	for(int i=0;i<5;i++){
		for(int j=0;j<5;j++){
			cin>>O[i][j];
		}
	}
	int maxX,minY,x,y;
	for(int i=0;i<5;i++){
		maxX=0;
		minY=100000;
		x=y=0;
		for(int j=0;j<5;j++){
			if(O[i][j]>maxX){
				maxX=O[i][j];
				x=j;
			}
			if(O[j][i]<minY){
				minY=O[j][i];
				y=j;
			}
		}
		I[i][x]=1;
		J[y][i]=1;
	}
	int OK=0,OKX=0,OKY=0;

	for(int i=0;i<5;i++){
		for(int j=0;j<5;j++){
			if(I[i][j]&&J[i][j]){
				OK=1;
				OKX=i+1;
				OKY=j+1;
				break;
			}
		}
	}
	if(OK) cout<<OKX<<' '<<OKY<<' '<<O[OKX-1][OKY-1];
	else cout<<"not found";
	return 0;
}
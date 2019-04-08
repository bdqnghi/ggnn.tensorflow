
int ROW,COL,ARRAY[MAXN][MAXN];

int main(){
	cin>>ROW>>COL;
	for(int i=0;i<ROW;i++){
		for(int j=0;j<COL;j++) cin>>ARRAY[i][j];
	}
	int iterx=0,itery=0;
	for(int iter=1;iter<=(ROW+COL-1);iter++){
		if(iter<=COL){
			iterx=0;
			itery=iter-1;
		}
		else{
			iterx=iter-COL;
			itery=COL-1;
		}
		while(iterx<ROW&&itery>=0){
			cout<<ARRAY[iterx][itery]<<endl;
			iterx++;
			itery--;
		}
	}
	return 0;
}
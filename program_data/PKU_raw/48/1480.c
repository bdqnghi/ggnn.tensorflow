
int main(){
	
	int day,ma[11][11]={0},mb[11][11]={0};
	cin>>ma[5][5]>>day;

	for(int t=1;t<=day;t++){
		if(t%2==1){
			for(int i=1;i<10;i++){
				for(int j=1;j<10;j++){
					mb[i][j]=ma[i][j]*2
					+ma[i+1][j]+ma[i+1][j+1]+ma[i+1][j-1]
					+ma[i-1][j]+ma[i-1][j+1]+ma[i-1][j-1]
					+ma[i][j+1]+ma[i][j-1];
				}
			}
		}
		else{
			for(int i=1;i<=9;i++){
				for(int j=1;j<=9;j++){
					ma[i][j]=mb[i][j]*2
					+mb[i+1][j]+mb[i+1][j+1]+mb[i+1][j-1]
					+mb[i-1][j]+mb[i-1][j+1]+mb[i-1][j-1]
					+mb[i][j+1]+mb[i][j-1];
				}
			}
		}
	}
	
	if(day%2==1){
		for(int i=1;i<=9;i++){
			for(int j=1;j<9;j++){
				cout<<mb[i][j]<<" ";
			}
			cout<<mb[i][9]<<endl;
		}
	}
	else{
		for(int i=1;i<=9;i++){
			for(int j=1;j<9;j++){
				cout<<ma[i][j]<<" ";
			}
			cout<<ma[i][9]<<endl;
		}
	}
}

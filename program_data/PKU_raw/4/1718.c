
int main() {
	int row, col;
	cin>>row>>col;
	int data[100][100];
//??????
	for(int i=0; i<row; i++){
		for(int j=0; j<col; j++){
			cin>>data[i][j];
		}
	}
//?????
	for(int i=0; i<col; i++){		//?????????????
		int m=0, n=i;
		while(true){
			cout<<data[m][n]<<endl;
			m++;
			n--;
			if(m==row || n==-1)		//?????????
				break;
		}
	}
	for(int i=1; i<row; i++){		//??????????????
		int m=i, n=col-1;
		while(true){
			cout<<data[m][n]<<endl;
			m++;
			n--;
			if(m==row || n==-1)		//?????????
				break;
		}
	}
	return 0;
}

/*
 * huixing2.cpp
 *
 *  Created on: 2012-12-5
 *      Author: wangyinzhi
 */


int mins(int x,int y){
	if(x>y) return y;
	else return x;
}

int maxs(int x, int y) {
	if (x > y)
		return x;
	else
		return y;
}

int main() {
	int row, col, i, j, n;
	cin >> row >> col;
	n = row * col;
	int a[row][col];
	for (i = 0; i < row; i++) {
		for (j = 0; j < col; j++) {
			cin >> a[i][j];
		}
	}
	for (i = 0; i < mins(row, col); i++) {
		for (j = 0; j <= i; j++) {
			cout<<a[j][i-j]<<endl;
		}
	}

		if (row >=col) {
			for (i = col ; i < row; i++) {
			for (j =i-col+1 ; j <= i; j++) {
				cout<<a[j][i-j]<<endl;
		}
	}
			for(i=row;i<=row+col-2;i++){
						for(j=i-col+1;j<row;j++){
							cout<<a[j][i-j]<<endl;
					}
				   }
		}
	   else {
		for(i=row;i<col;i++) {
			for(j=0;j<row;j++){
				cout<<a[j][i-j]<<endl;
		}
	}
		for(i=col;i<=row+col-2;i++){
			for(j=i-col+1;j<row;j++){
				cout<<a[j][i-j]<<endl;

		}
	   }
	   }

	return 0;
}
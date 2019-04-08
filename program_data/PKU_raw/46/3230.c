//============================================================================
// Name        : ex4.6.cpp
// Author      : Zhang Yu
// Version     :
// Copyright   : Your copyright notice
// Description : ????????
//============================================================================

int array[100][100];

int main() {
	int row;
	cin >>row;
	int col;
	cin >>col;
	for (int i=0;i<=row-1;++i)
		for (int j=0;j<=col-1;++j)
			cin >>array[i][j];
	int row0=0;
	int col0=0;
	int row1=row;
	int col1=col;
	for (;;)
	{
		for (int j=col0;j<=col1-1;++j)//????????
			cout <<array[row0][j]<<endl;
		++row0;//?????????
		for (int k=row0;k<=row1-1;++k)//????????
			cout <<array[k][col1-1]<<endl;
		--col1;//?????????
		for (int p=col1-1;row1-1>=row0 && p>=col0;--p)//????????
			cout <<array[row1-1][p]<<endl;
		--row1;//?????????
		for (int q=row1-1;col0<=col1-1 &&q>=row0;--q)//????????
			cout <<array[q][col0]<<endl;
		++col0;//?????????
		if (row0>=row1||col0>=col1)
			break;
	}
	return 0;
}
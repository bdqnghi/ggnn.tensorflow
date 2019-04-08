/*
 * ??(6-4) ??????????
 *
 *  Created on: 2012-12-12
 *      Author: zhuyongfu
 */



int row,col;//???????
int array[101][101];//???????
int (*p)[101] = array;//???????
int f(int m,int n){
	int i;
	if(m == row - 1&&n == col - 1)//????
	{
		cout << *(*(p + m) + n);
		return 0;
	}
	for(i = 0;m + i <= row - 1&&n - i >= 0;i++)//????
		cout << *(*(p + m + i) + n - i) << endl;
	if(n < col - 1)//????
		return f(0,n + 1);
	if(n >= col - 1)//????
		return f(m + 1,col - 1);
}


int main(){
	int i,j;//??????
	cin >> row >> col;
	for(i = 0;i < row;i++)
		for(j = 0;j < col;j++)//????
			cin >> array[i][j];
	f(0,0);//
	return 0;
}
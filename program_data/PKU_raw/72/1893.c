/*
 * 00004.cpp
 *
 *  Created on: 2013-12-13
 *      Author: Administrator
 ???m×n??????????????????????????????????????????????????
 ?????????????????????)?
????
???????????????m?5?m?20???n?5?n?20??
??m????m×n????????????????????????????????
????
?????????????????????m???????n???????????
????
10 5
0 76 81 34 66

1 13 58 4 40

5 24 17 6 65

13 13 76 3 20

8 36 12 60 37

42 53 87 10 65

42 25 47 41 33

71 69 94 24 12

92 11 71 3 82

91 90 20 95 44

????
0 2

0 4

2 1

2 4

3 0

3 2

4 3

5 2

5 4

7 2

8 0

8 4

9 3
*/
int main(){
	int m,n;
	int str[20][20];
	cin>>m>>n;
	for(int i=0;i<m;i++)
	for(int j=0;j<n;j++)
		cin>>str[i][j];
	for(int i=0;i<m;i++)
	for(int j=0;j<n;j++)
	{
		if(i==0&&j==0){
			if((str[0][0]>=str[0][1])&&(str[0][0]>=str[1][0]))
		          cout<<i<<" "<<j<<endl;
		}
		else if(i==0&&j==n-1){
			if((str[0][n-1]>=str[1][n-1])&&(str[0][n-1]>=str[0][n-2]))
				cout<<i<<" "<<j<<endl;
		}
		else if(i==m-1&&j==n-1){
					if((str[m-1][n-1]>=str[m-2][n-1])&&(str[m-1][n-1]>=str[m-1][n-2]))
						cout<<i<<" "<<j<<endl;
				}
		else if(i==m-1&&j==0){
					if((str[m-1][0]>=str[m-2][0])&&(str[m-1][0]>=str[m-1][1]))
						cout<<i<<" "<<j<<endl;
				}
		else if(i==0){
			if((str[0][j]>=str[0][j-1])&&(str[0][j]>=str[1][j])&&(str[i][j]>=str[0][j+1]))
					cout<<i<<" "<<j<<endl;
		}
		else if(j==0){
			if((str[i][j]>=str[i-1][j])&&(str[i][j]>=str[i+1][j])&&(str[i][j]>=str[i][j+1]))
						cout<<i<<" "<<j<<endl;
		}
		else if(i==m-1){
			if((str[i][j]>=str[i-1][j])&&(str[i][j]>=str[i][j-1])&&(str[i][j]>=str[i][j+1]))
						cout<<i<<" "<<j<<endl;
		}
		else if(j==n-1){
			if((str[i][j]>=str[i-1][j])&&(str[i][j]>=str[i][j-1])&&(str[i][j]>=str[i+1][j]))
						cout<<i<<" "<<j<<endl;
		}
		else{
		if((str[i][j]>=str[i-1][j])&&(str[i][j]>=str[i][j-1])&&(str[i][j]>=str[i+1][j])&&(str[i][j]>=str[i][j+1]))
			cout<<i<<" "<<j<<endl;}
	}
	return 0;
}



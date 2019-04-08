/*
 * xiaochu.cpp
 *?? - ?????????
 *  Created on: 2012-11-29
 *      Author: ???
 */
int  n,i, j, k;//??????
void f(int );//????
int a[100][100];
int s;
int main() {
	cin >> n;
	for (k = 1; k <= n; k++) {
		s=0;//???0
		for (i = 0; i < n; i++) {//????
			for (j = 0; j < n; j++) {
				cin >> a[i][j];
			}
		}
		f(n);//
	}
	return 0;
	}

void f(int m ) {
	for (i = 0; i < m; i++) {//????
		int min = 1000;
		for (j = 0; j < m; j++) {
			if (a[i][j] < min)
				min = a[i][j];
		}
		for (j = 0; j < m; j++) {
			a[i][j] -= min;
		}
	}
	for (j = 0; j < m; j++) {//????
		int min = 1000;
		for (i = 0; i < m; i++) {
			if (a[i][j] < min)
				min = a[i][j];
		}
		for(i=0;i<m;i++){
					a[i][j] -= min;
		}
	}
	s = s + a[1][1];//???????a[1][1]???
	for(i=0;i<m;i++){//??a[1][1]??????
		for(j=1;j<m-1;j++){
			a[i][j]=a[i][j+1];
		}
	}
for(j=0;j<m;j++){
	for(i=1;i<m-1;i++){
		a[i][j]=a[i+1][j];
	}
	}
	if(m==2)//????????????
		{
		cout<<s<<endl;
		}
	else f(m-1);//??
	}
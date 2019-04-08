//============================================================================
// Name        : hanshu0109.cpp
// Author      : 1300012911
// Version     : 20131120,Wed,11th week
// Copyright   :
// Description : ????
//============================================================================


int fenjie(int a,int max){//a:?????max??1??????????????
	int i = 0;
	int sum = 0;//????
	if (a == 1) return 1;//1???????1??????
	for (i = max;i >= 2;i--)
	{
		if ((a % i) == 0) sum += fenjie(a/i,i);//i??????
	}
	return sum;//????
}

int main() {
	int k = 0;
	int n = 0;
	int num = 0;
	cin >> n;//??
	for (k = 1;k <= n;k++)
	{
		cin >> num;//?????
		cout << fenjie(num,num);//????????
		if (k < n) cout << endl;
	}
	return 0;
}

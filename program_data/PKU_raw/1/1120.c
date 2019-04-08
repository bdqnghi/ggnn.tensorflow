/*
 * ????apple.cpp
 * ???00948343_??
 * ?????2012/11/19
 * ???????
 */



int fenjie(int a, int start);

int main(){
	int n, i, integ;
	cin >> n;
	for (i=0;i<n;i++){
		cin >> integ;
		cout << fenjie(integ, 2) << endl;
	}
	return 0;
}

int fenjie(int a, int start){
	int i, sum=1;
	if (start==a)
		sum=1;
	else{
		for (i=start;i<=sqrt(a);i++){
			if (a%i==0){
				sum = sum + fenjie(a/i, i);
			}
		}
	}
	return sum;
}

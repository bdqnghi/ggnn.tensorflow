/*
 * ????first.cpp
 * ???00948343_??
 * ?????2012/9/16
 * ?????1???100?????????
 */



int main(){
	int length, t=0, i, j, k, flag=0, count;
	cin >> t;
	char a[100000];
	for (i=0;i<t;i++){
		cin >> a;
		length = strlen(a);
		flag=0, count=0;
		for (j=0;j<length;j++){
			count=0;
			if (a[j]!='0'){
			for (k=j+1;k<length;k++){
				if (a[j]==a[k]){
					a[k]='0';
					count++;
				}
			}
			if (k==length&&count==0){
				cout << a[j] << endl;
				flag=1;
				break;
			}
		}
		}
		if (flag==0)
			cout << "no" << endl;
	}
	return 0;
}

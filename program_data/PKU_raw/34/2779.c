/*
 * qimolianxi_3.cpp
 * Name:????
 *  Created on: 2010-12-24
 *      Author: ??
 */

void os(int o);
void js(int j) {
	int n = j * 3 + 1;
	cout << j << "*" << 3 << "+" << 1 << "=" << n << endl;
	if(n%2==0) os(n);
	else {
		if(n!=1) js(n);
		else cout<<"End"<<endl;
	}
}
void os(int o) {
	int m = o / 2;
	cout << o << "/" << 2 << "=" << m << endl;
	if(m%2==0) os(m);
	else{
		if(m!=1) js(m);
		else cout<<"End"<<endl;
	}
}
void progress(int t) {
	if(t==1){
		cout<<"End"<<endl;
		return;
	}
	if (t != 1 && t % 2 == 1)
	js(t);
	if (t % 2 == 0)
	os(t);
}
int main() {
	int t;
	cin >> t;
	progress(t);
	return 0;
}


void jiaogu(int N){
	if (N==1){
		cout << "End" << endl;
		return;
	}
	if (N%2!=0){
		cout <<N<<"*"<<3<<"+"<<1<<"="<<3*N+1<<endl;
		return jiaogu(3*N+1);
	}
	if (N%2==0){
		cout <<N<<"/"<<2<<"="<<N/2<<endl;
		return jiaogu(N/2);
	}
}
int main() {
	int N = 0;
	cin >> N;
	jiaogu(N);
	return 0;
}

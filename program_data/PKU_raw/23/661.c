char str[101][101];
int n=1;
int main(){
	while (cin>>str[n]) n++;
	for (n--;n>1;n--) cout<<str[n]<<' ';
	cout<<str[1];
	return 0;
}
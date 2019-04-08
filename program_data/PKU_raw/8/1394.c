int a[1000],b[1000];
int m,n;
void input(){
	cin>>m>>n;
	for(int i=1;i<=m;i++)cin>>a[i];
	for(int i=1;i<=n;i++)cin>>b[i];
}
void resort(){
	sort(a+1,a+m+1);
	sort(b+1,b+n+1);
}
void output(){
	cout<<a[1];
	for(int i=2;i<=m;i++)cout<<' '<<a[i];
	for(int i=1;i<=n;i++)cout<<' '<<b[i];
}
int main(){
	input();
	resort();
	output();
}

int main(){
	int n,m;
	cin>>n>>m;
	int a[100];
	int *p=a;
	for(;p<=a+n-1;p++)
		cin>>*p;
	for(p=a+n-1;p>=a;p--)
		*(p+m)=*p;
	for(p=a+n;p<=a+n+m-1;p++)
		*(p-n)=*p;
	p=a;
	cout<<*p++;
	for(;p<=a+n-1;p++)
		cout<<" "<<*p;
}
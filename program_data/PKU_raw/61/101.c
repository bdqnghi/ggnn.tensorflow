int fbn(int);
int main(){
	int n;
	cin>>n;
	int i=0,a[1000];
	for(i=0;i<n;i++)
		cin >> a[i];
	for(i=0;i<n;i++)
		cout<<fbn(a[i])<<endl;
	return 0;
}
int fbn(int n)
{
	int c;
	if(n==1||n==2)c=1;
	else c=fbn(n-1)+fbn(n-2);
	return c;
}
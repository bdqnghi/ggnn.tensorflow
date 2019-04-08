
void f(int n)
{
	cout<<n%10;
	n=n/10;
	if(n)	f(n);
}


int main(){
	int n;
	cin>>n;
	f(n);
	return 0;
}
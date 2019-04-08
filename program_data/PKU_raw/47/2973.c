
int main(){
	int n;
	cin>>n;
	int a[100];
	int *p=a,*q=a;
	for(;p<a+n;p++)
		cin>>*p;
	int temp;
	for(p--;q<p;q++,p--)
	{
		temp=*q;
		*q=*p;
		*p=temp;
	}
	p=a;
	cout<<*p++;
	for(;p<a+n;p++)
		cout<<" "<<*p;
}
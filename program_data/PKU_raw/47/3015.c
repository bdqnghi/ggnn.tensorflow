int main(void)
{
	int n,a[100];
	int *a_pointer=NULL;
	cin>>n;
	a_pointer=a;
	for(int i=0;i<n;i++) cin>>*a_pointer++;
	*a_pointer--;
	for(int i=0;i<n-1;i++) cout<<*a_pointer--<<' ';
	cout<<*a_pointer;
	return 0;
}

int main()
{
	int a[100],N=0,i=0;
	int *p=&a[0];
	cin>>N;
	for(i=0;i<N;i++)
	cin>>*p++;
	cout<<*--p;
	for(i=N-2;i>=0;i--)
	cout<<" "<<*--p;
	return 0;
}
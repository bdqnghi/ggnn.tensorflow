int main()
{
	int n,i,j,num[50]={0};
	int *p;
	p=num;
	cin>>n;
	for(p=num+0;p<num+n;p++)
		cin>>*p;
	p=num+n-1;
	cout<<*p;
	for(p=num+n-2;p>=num+0;p--)
		cout<<" "<<*p;
	cout<<endl;
	return 0;
}


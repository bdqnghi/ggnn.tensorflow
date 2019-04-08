void move(int *,int,int);

int main()
{
	int i,a[100]={0},m,n;
	cin>>n>>m;
	for(i=0;i<n;i++)
		cin>>a[i];
	move(a,n,m);
	cout<<a[0];
	for(i=1;i<n;i++)
		cout<<" "<<a[i];
	return 0;
}
void move(int *num,int n,int m)
{
	int *p;
	int end,i;
	p=num;
	end=*(p+n-1);
	for(p=p+n-1;p>num;p--)
		*p=*(p-1);
	*p=end;
	m--;
	if(m>0)
		move(num,n,m);
}
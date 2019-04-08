int a[maxn];
int main()
{
	int n,i,x1,x2;
	memset(a,0,sizeof(a));
	scanf("%d",&n);
	for (i=0;;i++) {
		scanf("%d %d",&x1,&x2);
		if (x1+x2==0)
			break;
		if (a[x2]!=-1)
			a[x2]++;
		a[x1] = -1;
	}
	for (i=0;i<n;i++)
		if (a[i] == n-1) {
			cout<<i<<endl;
			return 0;
		}
	cout<<"NOT FOUND"<<endl;

}

int main() {
	int n;
	cin >> n;
	int a[n];
	for(int i1=0;i1<n;i1++)
		cin >> a[i1];
	int j=0;
	for(int i1=0;i1<n;i1++){
		j=i1+1;
		for (int i2=i1+1;i2<n;i2++)
		{
			if(a[i2]!=a[i1])
			{a[j]=a[i2];j++;}
		}
		n=j;
	}
	for(int i1=0;i1<n;i1++){
	cout << a[i1];
	if (i1!=n-1)
		cout << " ";
	}
	return 0;
}
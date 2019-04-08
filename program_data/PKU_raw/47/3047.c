

int main() {
	int n;
	cin >> n;
	int a[n],b[n];
	for(int i=0;i<n;i++)
	cin >> a[i];
	for(int i=0;i<n;i++)
	{
      b[i]=a[n-1-i];
      if(i==0)
	  cout << b[i];
	  if(i>0)
	  cout << " " << b[i];
    }
	return 0;
}

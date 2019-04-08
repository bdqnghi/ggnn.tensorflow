

int main()
{
	int n=0;
	cin >> n;
	float x,y,z;
	float a[n-1],b[n-1],c[n-1];
	cin >> x >> y;
	z=y/x;
	for(int i=1;i<=n-1;i++)
	{
		cin >> a[i] >> b[i];
		c[i]=b[i]/a[i];
		if(c[i]>(z+0.05)) cout << "better" <<endl; 
		else if(c[i]<(z-0.05)) cout << "worse" <<endl;
		else cout << "same" <<endl;
	}
	return 0;
}
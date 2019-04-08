int main()
{
	int n,a[100],b[100],c[100],s=0,i,d=0;
	cin >> n;
	for(i=1;i<=n;i++)
	{
		cin >> a[i] >> b[i];
		if(a[i]>=90 && a[i]<=140 && b[i]>=60 && b[i]<=90)
		{
			s = s + 1;
			c[i] = s;
		}
		else 
		{
			s = 0;
			c[i]=0;
		}
		if(d<=c[i]) d=c[i];
	}
    cout << d << endl;
return 0;
}
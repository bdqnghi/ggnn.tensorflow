int main()
{
	int n,k,y,h,i,m,x;
	while (cin >> n&&n!=0)
	{
		for (x=3;x<=n/2;x++)
		{
			k=(int)sqrt(x);
			y=n-x;
			for (i=2;i<=k;i++)
				if ((x%i)==0) break;
				if (i==k+1)
				{
					h=(int)sqrt(y);
					for (m=2;m<=h;m++)
						if ((y%m)==0) break;
						if (m==h+1)
							cout << x << " " << y << endl;
				}
		}
	
	}
	return 0;
}
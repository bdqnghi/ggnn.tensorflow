int main()
{
	int n, a, b, c=0, d, i=1, j=0;                //??????
	int m[100]={0};                                //????
	cin >> n;                                     //??n
	for (i=1;i<=n;i++)                            
	{
		cin >> a >> b;
		if (a>=90 && a<=140 && b>=60 && b<=90)    //??????1
			c++;
		else
		{
			j++;                                  //?????c,??
			m[j]=c;
			c=0;
		}
		if (i==n)                                //??????????c
		{
			j++;
			m[j]=c;
		}		
	}
	for (i=1;i<=j;i++)                           //??????????
	{
		if (m[i]<=m[i+1])
			d = m[i+1];
		else
		{
			m[i+1] = m[i];
			d = m [i+1];
		}
	}
	cout << d << endl;                           //???????
	return 0;
}



int main()
{
	char a[260], b[260];
	int s1[260],s2[261],r[260];
	memset(a,'0',260);
	memset(b,'0',260);
	memset(s1,0,sizeof(s1));
	memset(s2,0,sizeof(s2));
	memset(r,0,sizeof(r));
	//cout << r[258] << endl;
	cin >> a >> b ;
	//cout << a <<endl << b;

	int l1 = strlen(a);
	int l2 = strlen(b);

	int max;
	if(l1>l2)
		max = l1;
	else
		max = l2;
	//?????
	int j=0;
	for(int i = l1-1; i>=0; i--,j++)
	{
		s1[j] = a[i]-'0';
		//cout << s1[j];
	}
	j=0;
	for(int i = l2-1; i>=0; i--,j++)
	{
		s2[j] = b[i]-'0';
		//cout << s2[j];
	}

	//??
	int x = 0;
	for(int i = 0; i<260;i++)
	{
		r[i] = r[i]+s1[i]+s2[i];
		//x = i;
		if( r[i] >9)
		{
			r[i] = r[i] -10;
			r[i+1]++;
			//x = i+1;
		}
		if(r[i] !=0)
			x = i;
	}

	//cout << x << endl;
	for(int i = x; i>=0; i--)
		cout << r[i];

	return 0;
}
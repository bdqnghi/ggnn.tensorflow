

int a[300], b[300];
int c[300];

int main()
{
	char aa[300], bb[300];
	cin >> aa >> bb;
	int lena = strlen(aa), lenb = strlen(bb);
	memset(a, 0, 260);
	memset(b, 0, 260);
	for(int i=0; i<lena; i++)
		a[i] = aa[lena-i-1]-'0';
	for(int i=0; i<lenb; i++)
		b[i] = bb[lenb-i-1]-'0';
	int cc = 0;
	memset(c, 0, 300);
	for(int i=0; i<max(lena, lenb)+1; i++)
	{
		c[i] = a[i]+b[i]+cc;
		if(c[i] > 9)
		{
			cc = 1;
			c[i] -= 10;
		}
		else
		{
			cc = 0;
		}
	}
	int lenc = 0;
	for(int i=260; i>=0; i--)
	{
		if(c[i] != 0)
		{
			lenc = i+1;
			break;
		}
	}
	for(int i=lenc-1; i>=0; i--)
		cout << c[i];
	if(lenc == 0)
		cout << '0';
	cout << endl;
}
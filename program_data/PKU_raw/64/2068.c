//********************************
//*?????(14-4) ????      **
//*?????? 1300012887 **
//*???2013.12.11 **
//********************************
int main()
{
	int n, i, j, k = 0;
	cin >> n;  //????
	struct dian   //?????dian
	{
		int x;
		int y;
		int z;
	} a[12];  //???????a
	for (i = 0; i < n; i++)
		cin >> a[i].x >> a[i].y >> a[i].z;  //???????
	struct cha  //?????cha
	{
		int x1;
		int y1;
		int z1;
		int x2;
		int y2;
		int z2;
		double c;
	} b[46], t;  //???????b,???t
	for (i = 0; i < n-1; i++)  //???????????
		for (j = i+1; j < n; j++)
		{
			b[k].x1 = a[i].x;
			b[k].y1 = a[i].y;
			b[k].z1 = a[i].z;
			b[k].x2 = a[j].x;
			b[k].y2 = a[j].y;
			b[k].z2 = a[j].z;  //???
			b[k].c = sqrt((b[k].x2 - b[k].x1) * (b[k].x2 - b[k].x1) + (b[k].y2 - b[k].y1) * (b[k].y2 - b[k].y1) + (b[k].z2 - b[k].z1) * (b[k].z2 - b[k].z1));  //??????
			k++;  //??
		}
	for (i = 0; i < k-1; i++)  //????????????
		for (j = 0; j < k-i-1; j++)
		{
			if (b[j].c < b[j+1].c)
			{
				t = b[j];
				b[j] = b[j+1];
				b[j+1] = t;
			}
		}
	for (i = 0; i < k; i++)  //??????
	{
		cout << "(" << b[i].x1 << "," << b[i].y1 << "," << b[i].z1 << ")" << "-" << "(" << b[i].x2 << "," << b[i].y2 << "," << b[i].z2 << ")" << "=" ;
		cout << fixed << setprecision(2) << b[i].c << endl;
	}
	return 0;
}

	

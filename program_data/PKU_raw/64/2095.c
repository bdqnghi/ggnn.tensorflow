//********************************
//*????***********************
//*??? 1300012920**************
//********************************
int main()
{
	int n , i , j;
	int x , y , z;
	int cnt = 0;
	//???????"zuobiao"????????
	struct 
	{
		int x;
		int y;
		int z;
	}zuobiao[10];
	struct 
	{
		int x1;
		int y1;
		int z1;
		int x2;
		int y2;
		int z2;
		int num1;
		int num2;
		double len;
	}len[50];
	cin >> n;//??????
	for(i = 0 ; i < n ; i++)//??????
	{
		cin >> x >> y >> z;
		zuobiao[i].x = x;
		zuobiao[i].y = y;
		zuobiao[i].z = z;
	}
	//???????????????????????len?
	for(i = 0 ; i < n - 1 ; i++)
		for(j = i + 1 ; j < n ; j++)
		{
			len[cnt].x1 = zuobiao[i].x;
			len[cnt].y1 = zuobiao[i].y;
			len[cnt].z1 = zuobiao[i].z;
			len[cnt].x2 = zuobiao[j].x;
			len[cnt].y2 = zuobiao[j].y;
			len[cnt].z2 = zuobiao[j].z;
			len[cnt].num1 = i;
			len[cnt].num2 = j;
			len[cnt].len = sqrt((zuobiao[i].x - zuobiao[j].x) * (zuobiao[i].x - zuobiao[j].x) + (zuobiao[i].y - zuobiao[j].y) * (zuobiao[i].y - zuobiao[j].y) + 
			(zuobiao[i].z - zuobiao[j].z) * (zuobiao[i].z - zuobiao[j].z));
			cnt++;
		}
	for(i = 0 ; i < (n - 1) * n / 2 - 1 ; i++)
		for(j = i + 1 ; j < (n - 1) * n / 2 ; j++)
		{
			//????????????len[]????
			if(len[i].len < len[j].len)
			{
				len[50] = len[i];
				len[i] = len[j];
				len[j] = len[50];
			}
			//???????????????
			if(len[i].len == len[j].len && len[i].num1 > len[j].num1)
			{
				len[50] = len[i];
				len[i] = len[j];
				len[j] = len[50];
			}
			//????????????????????????
			if(len[i].len == len[j].len && len[i].num1 == len[j].num1 && len[i].num2 > len[j].num2)
			{
				len[50] = len[i];
				len[i] = len[j];
				len[j] = len[50];
			}

		}
	cout << fixed;
	for(j = 0 ; j < n * (n - 1) / 2 ; j++)
		cout << "(" << len[j].x1 << "," << len[j].y1 << "," << len[j].z1 << ")-(" << len[j].x2 << "," << len[j].y2 << "," << len[j].z2 <<")=" << setprecision(2) << len[j].len << endl;
	return 0;
}
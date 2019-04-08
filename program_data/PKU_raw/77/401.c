/**
* @file 2.cpp
* @author ??
* @date 2010?12?29
* @description
* ??????:????
*/
void solve();
void paixu();
char a[1000], m;
int length, flag[1000] = {0},b[500][2],sum = 0;
int main()
{
	cin >> a;
	length = strlen(a); 
	m = a[0];                                                   //??????
	solve();
	paixu();
	return 0;
}
void solve ()
{
	int i,j;
	for (i=0;i<length-1;i++)
	{
		if (a[i] == m && flag[i] == 0)
		{
			for (j=1;j<length - i;j++)
			{
				if(flag[i+j] == 1)                            //?????????
					continue;
				else
					if(a[i+j] == m)
						break;
					else
					{
						flag[i] = 1;
						flag[i+j] = 1;
						b[sum][0] = i;
						b[sum][1] = i + j;
						sum++;
						break;
					}
			}
		}
	}
	if (flag[0] == 0 )
		solve();                                         //??
}
void paixu()
{
	int i, j, temp;
	for (j=0;j<length/2-1;j++)
	{
		for (i=0;i<length/2-j-1;i++)
		{
			if (b[i][1] > b[i+1][1])
			{
				temp = b[i+1][1];
				b[i+1][1] = b[i][1];
				b[i][1] = temp;
				temp = b[i+1][0];
				b[i+1][0] = b[i][0];
				b[i][0] = temp;
			}
		}
	}                                                   //?????
	for (i=0;i<length/2;i++)
		cout << b[i][0] << " " << b[i][1] << endl;         //??
}

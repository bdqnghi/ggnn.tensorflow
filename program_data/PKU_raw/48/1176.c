//****************************
//**Title: ???????? **
//**Author:???1300017687 **
//**Date?2013.12.5         **
//**File?2.cpp             **
//****************************

int first;						//????????????
int findbat(int i, int j, int days)	//????????days??i?j???????
{
	if ((i == -1) || (i == 9) || (j == -1) || (j == 9))	//??????
		return 0;				//????0
	if (days == 0)				//??days?0
	{
		if (i == 4 && j == 4)	//???????
			return first;		
		else
			return 0;
	}
	else
		return findbat(i - 1, j - 1, days - 1) + findbat(i - 1, j , days - 1) + findbat(i - 1, j + 1, days - 1)
			+  findbat(i , j - 1 , days - 1) + 2 * findbat(i , j ,days - 1) + findbat(i, j + 1,days - 1 )
			+  findbat(i + 1, j - 1, days - 1) + findbat(i + 1, j , days - 1) + findbat (i + 1, j + 1, days - 1);	//????
}
int main()
{
	int days;						//??
	cin >> first >> days;

	for (int i = 0 ; i <= 8 ; i++)		//?????????
	{
		cout << findbat(i,0,days);
		for(int j = 1; j <= 8 ; j++)
			cout << ' ' << findbat(i,j,days);
		cout << endl;
	}
	return 0;
}
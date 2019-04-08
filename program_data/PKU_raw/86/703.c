

int N, Total, Time, PNum, Stop;
inline int Max(int x, int y)
{ return (x > y ? x : y); }
int main()
{
	cin >> N;
	for (int i = 0; i < N; i ++)
	{
		cin >> Stop;
		if (Stop == 0) {cout << "60" << endl; continue;}
		Total = 0; Time = 60;
		for (int j = 0; j < Stop; j ++)
		{
			cin >> PNum;
			if (Time - PNum - 3 * j >= 0) 
			{
				Total = PNum;
				if (Time - PNum - 3 * j > 3)
				Total += Time - PNum - 3 * (j + 1);
			}
		}
		cout << Total << endl;		
	}
	return 0;
}


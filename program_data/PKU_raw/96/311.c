/************************************
5.cpp
???Nov 2, 2011
??(12-11) ??13
?? 1100012886
************************************/

int main()
{
	int i = 0, dividend = 0;
	char n[100];
	cin >> n;
	do
	{
		dividend = dividend * 10 + n[i] - '0';
		i++;
	} while ((dividend < 13) && (n[i] != '\0')); //????????
	while (n[i] != '\0')
	{
		cout << dividend / 13; //????i+1?????
		dividend = (dividend % 13) * 10 + n[i] - '0'; //?????
		i++;
	}
	cout << dividend / 13 << endl; //???????
	cout << dividend % 13 << endl; //????????????
	return 0;
}

//****************************
//*????????         **
//*?????? 1300012965  **
//*???20131127			**
//****************************
int apple(int mf, int nf)
{
	if(nf == 1)
		return 1;
	if(mf == 0)
		return 1;
	if(mf >= nf)
		return apple(mf, nf - 1) + apple(mf - nf, nf);
	if(mf < nf)
		return apple(mf, nf - 1);
}

int main()
{
	int m, n, i, j, num;
	cin >> j;
	for(i = 1; i <= j; i++)
	{
		cin >> m >> n;
		num = apple(m, n);
		cout << num << endl;
	}
	
	
	return 0;
}
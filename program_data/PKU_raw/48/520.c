//****************************************
//*?????(11.8) ????????    **
//*?????? 1100012798              **
//*???2011.11.26                     **
//****************************************
int a[9][9] = {0} , m;
void breed(int x,int y,int nf)                             //??????
{
	int xx,yy;
	if (nf != 0)                                           //??????:??
	{
		breed(x,y,nf - 1);                                 //??
		for (xx = x - 1;xx <=  x + 1;xx++)
		{
			for (yy = y - 1;yy <= y + 1;yy++)
			{
				a[xx][yy]+= m;
				breed(xx,yy,nf - 1);
			}
		}
	}
}
int main()
{
	int n , i , j;                                         //??????
	cin >> m >> n;                                         //????
	a[4][4] = m;
	breed(4,4,n);                                          //??
	for (i = 0;i < 9;i++)                                  //??????
	{
		cout << a[i][0];
		for (j = 1;j < 9;j++)
			cout << " " << a[i][j];
		cout << endl;
	}
	return 0;
}
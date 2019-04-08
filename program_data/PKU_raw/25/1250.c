//**************************
//*?????2?N??     **
//*??????           **
//*???20131114         **
//************************** 
int main ()
{
	int n ,i ,j ,k ,nLen ,h ,lg ,q ,flag;
	int a[9999] ,b[9999];
	memset(a,0,sizeof(a));
	cin >> n;
	if(n == 0)
		cout << "1" << endl;
	if(n == 1)
		cout << "2" << endl;//??????
	if(n != 0 && n != 1)
    {
		memset(b,0,sizeof(b));//????
		a[0] = 2;
		lg = 1;
	    for(i = 1; i <= n-1; i++)
		{
			for(j = 0; j <= lg-1; j++)
				b[j] = 2 * a[j];//?????2
			for(q = 0; q <= n-1; q++)
			{
				if(q == lg-1)
				{
					if(b[q] > 9)
						lg++;
				}
				if(b[q] > 9)
				{
					b[q] -= 10;
					b[q+1] += 1;//????10???
				}
			}
		    for(k = 0; k <= lg-1; k++)
				a[k] = b[k];//??
		}
		for(h = lg-1; h >= 0; h--)
			cout << a[h];
		cout << endl;
	}
	return 0;
}
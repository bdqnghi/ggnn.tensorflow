//****************************************
//*??????                         **
//*?????? 1100012802              **
//*???2011.10.13                     **
//****************************************
int main()
{
    int a,b,c,cc1,cc2,cc3;//a?b?c????cc1?cc2?cc3???????????
	for(a = 1;a <= 3;a++)
	{
		for(b = 1;b<=3;b++)
		{
			if(b == a)
				continue;
			c = 6 - a - b;
			cc1 = a + (b > a) + (c == a);
			cc2 = b + (a > b) + (a > c);
			cc3 = c + (c > b) + (b > a);
			if(cc1 == 3 && cc2 == 3 && cc3 == 3)
			{
				if(a > b && b > c)
					cout<<"CBA";
				if(a > c && c > b)
					cout<<"BCA";
				if(b > a && a > c)
					cout<<"CAB";
				if(b > c && c > a)
					cout<<"ACB";
				if(c > a && a > b)
					cout<<"BAC";
				if(c > b && b > a)
					cout<<"ABC";
			}
		}
	}
	return 0;
}

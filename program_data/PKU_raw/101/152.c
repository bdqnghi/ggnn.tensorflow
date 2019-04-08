//**************************************************************************
//*???????                                                          *
//*???????????                                                  *
//*??????                                                            *
//*???2010?11?17?                                                    *
//**************************************************************************
int main()
{
	int a, b, c, i,flag = 0;                      //???????a,b,c????????????
	int sa, sb, sc;
	for (a = 1; a<= 3; a ++)
	{
		for (b = 1; b <= 3; b ++)
		{
			for (c = 1; c <= 3; c ++)
			{                                     //???????????????1?3???????
				sa = (b > a) + (c == a);
				sb = (a > b) + (a > c);
				sc = (c > b) + (b > a);           //sa,sb.sc??????????????
				if (a > b && sa < sb && b> c&& sb<sc)
				{ flag = 1;cout << "ABC";}
				if(a>c&&sa<sc&&c>b&&sc<sb)
				{ flag = 1;	cout <<"ACB";}
				if(b>a&&sb<sa&&a>c&&sa<sc)
				{ flag = 1;cout << "BAC";}
				if(b>=c&&sb<=sc&&c>=a&&sc<=sa)
				{ flag = 1; cout <<"BCA";}
				if(c>a&&sc<sa&&a>b&&sa<sb)
				{ flag = 1;cout <<"CAB";}
				if(c>b&&sc<sb&&b>a&&sb<sa)
				{ flag = 1;cout << "CBA";}               //???????????????????????????????
				if( flag == 1)break;

			}if( flag == 1)break;
		}if( flag == 1)break;
	}
			return 0;
}


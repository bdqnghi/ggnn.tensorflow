int main()
{
	//int a[2], b[2], c[2], d[2], e[2];
	for (int a = 1; a < 6; a++)
		for (int b = 1; b < 6; b++)
			for (int c = 1; c < 6; c++)
				for (int d = 1; d < 6; d++)
					for (int e = 1; e < 6; e++)
						if(e != 2 && e !=3 && ((e == 1 && d == 1 && c != 1) + (b == 2) + 
								(a  == 5 && e != 1) + (c != 1) + ( d == 1 && c != 1) == 2)
								&& (a == 5) && (c == 1) && (a + b + c + d + e) == 15 && a*b*c*d*e == 120)
							cout << a <<" " << b << " "<< c <<" "<< d <<" "<< e << endl;		
	return 0;
}
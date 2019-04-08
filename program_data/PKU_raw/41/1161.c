int main()
{
	int a, b, c, d, e, A, B, C, D, E, sum, cnt1, cnt2;
	for(a = 1; a <= 5; a++)
	{
		for(b = 1; b <= 5; b++)
		{ 
			for(c = 1; c <= 5; c++)
			{ 
				for(d = 1; d <= 5; d++)
				{ 
					for(e = 1; e <= 5; e++)
					{
						A = (e==1);
						B = (b==2);
						C = (a==5);
						D = (c!=1);
						E = (d==1);
						cnt1 = (a==A)+(b==B)+(c==C)+(d==D)+(e==E);
						cnt2 = (a-1==A)+(b-1==B)+(c-1==C)+(d-1==D)+(e-1==E);
						sum = A+B+C+D+E;
						if(sum==2 && a!=b && a!=c && a!=d && a!=e && b!=c && b!=d && b!=e && c!=d && c!=e && d!=e && cnt1==1 && e!=2 && e!=3 && cnt2==1)
						{
							cout << a << ' '<< b << ' ' << c << ' '<< d << ' ' << e << endl;
						}
					}
				}
			}
		}
	}
	return 0;
}

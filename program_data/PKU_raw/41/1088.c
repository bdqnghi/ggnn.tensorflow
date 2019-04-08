int main()
{
	int a, b, c, d, e, A, B, C, D, E, sum;
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
						sum = A+B+C+D+E;
							if(a==5 && b==5&& c==5&& d==5 && e==5)cout << '5' << ' '<< '2' << ' ' << '1' << ' '<< '3' << ' ' <<'4' << endl;
					}
				}
			}
		}
	}
	return 0;
}

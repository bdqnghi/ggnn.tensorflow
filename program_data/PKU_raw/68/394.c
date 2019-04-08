int num_f (int x);
int main ()
{
	int num, a, b, t;
	scanf ("%d", &num);
	for (t=6; t<=num; )
	{
		for (a=3; a<=t/2; )
			{
				b = t - a;
				if (num_f(a)==1&&num_f(b)==1)
				{
					printf ("%d=%d+%d\n", t, a, b);
					t+=2;
					break;
				}
				else a+=2;
			}
		
	}
	return 0;
}

int num_f (int x)
{
	int i;
	for (i=2; i*i<=x; i++)
		if (x%i==0) break;
		if (i*i>x) return 1;
		else return 0;
}
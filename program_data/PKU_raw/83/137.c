
int main ()
{
	int n, i;
	int c[10];    //???????
	int s[10];    //???????
	float g[10];   //?????????
	float ss;    //???????
	float G = 0.0, C = 0.0, GPA;
	scanf ("%d", &n);
	for (i = 0; i < n; i++)
	{
		scanf ("%d", &c[i]);
		C = C + c[i];
	}
	for (i = 0; i < n; i++)
	{
		scanf ("%d", &s[i]);
		if (s[i] >= 90)
		{
			ss = 4.0;
		}
		else if (s[i] >= 85)
		{
			ss = 3.7;
		}
		else if (s[i] >= 82)
		{
			ss = 3.3;
		}
		else if (s[i] >= 78)
		{
			ss = 3.0;
		}
		else if (s[i] >= 75)
		{
			ss = 2.7;
		}
		else if (s[i] >= 72)
		{
			ss = 2.3;
		}
		else if (s[i] >= 68)
		{
			ss = 2.0;
		}
		else if (s[i] >= 64)
		{
			ss = 1.5;
		}
		else if (s[i] >= 60)
		{
			ss = 1.0;
		}
		else 
		{
			ss = 0.0;
		}
		g[i] = ss * c[i];
		G = G + g[i];
	}
    GPA = G / C;
	printf ("%.2f\n", GPA);
	return 0;
}
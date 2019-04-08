int main ()
{
	int w,t;
	scanf ("%d",&w);
	int month[12]={31,28,31,30,31,30,31,31,30,31,30,31};
	int m;
	m = 13%7+w-1;
	if (m>7) m = m-7;
    if (m==5) printf ("1\n");
	int i,j,day[12]={0};
	for (i=1;i<12;i++)
	{
		for (j=0;j<i;j++)
			day[i] += month[j];
		day[i] += 13;
		t = day[i]%7+w-1;
		if (t>7) t = t-7;
		if (t==5) printf ("%d\n",i+1);
	}
	
	return 0;
}
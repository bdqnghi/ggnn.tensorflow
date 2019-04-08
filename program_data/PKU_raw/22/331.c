void main ()
{
	int max,mu=-1,min=0,i,k;
	char dot;	
	scanf ("%d",&max);
	scanf ("%c",&dot);
	if (dot!=',') 
	{
		printf ("No");
		min=1;
	}
	for (i=0;dot==',';i++)
	{
		scanf ("%d",&k);
		if (k>max)
		{
			mu=max;
			max=k;
		}
		else if (k<max&&k>mu) mu=k;
		scanf ("%c",&dot);
	}
	if (min==0&&mu==-1) printf ("No");
	else if (min==0&&mu!=-1) printf ("%d",mu);
}



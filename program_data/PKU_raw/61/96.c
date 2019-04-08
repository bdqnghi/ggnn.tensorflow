int main()
{
	int x[21],	i,	n,	y[100];
	x[1]	=	1;
	x[2]	=	1;
	for(i	=	3;	i	<	21;	i++)
	{
		x[i]	=	x[i	-	1]	+	x[i	-	2];
	}
	cin	>>	n;
	for(i	=	0;	i	<	n;	i++)
	{
		cin	>>	y[i];
	}
	for(i	=	0;	i	<	n;	i++)
	{
		cout	<<	x[y[i]]	<<	endl;
	}
	return 0;
}
int main()
{
	int n,i,nian,a,b,c,d;
	double A,B,C,D;

	a=0;
	b=0;
	c=0;
	d=0;
	scanf ("%d",&n);

	for (i=0;i<n;i++){
		scanf ("%d",&nian);

		if (nian<=18) a++;
		else if (nian<=35) b++;
		else if (nian<=60) c++;
		else d++;
	}

	A=(double )100*a/n;
	B=(double )100*b/n;
	C=(double )100*c/n;
	D=(double )100*d/n;

	printf("1-18: %.2lf%%\n19-35: %.2lf%%\n36-60: %.2lf%%\n60??: %.2lf%%",A,B,C,D);
	return 0;
}


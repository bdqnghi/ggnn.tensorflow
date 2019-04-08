int main(int argc, char* argv[])
{
	int n,a[5],i=0,j;
	double N=0;
	scanf ("%d",&n);
	while (n % 10 != 0)
	{
		a[i]= n % 10;
		n = n/10;
		i++;
	}
	for (j=0;j<i;j++)
	{
		N += a[j]* pow (10, (i-j-1));
	}
	printf("%.0lf",N);
	return 0;
}
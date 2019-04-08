int main()
{
	int n,a=0,b=0,c=0,d=0;
	double A,B,C,D;
	int z[100];
	scanf("%d",&n);
	for(int i=0;i<n;i++)
	{
		scanf("%d",&z[i]);
		if(z[i]<=18)
			a++;
		else if(z[i]>=19&&z[i]<=35)
			b++;
		else if(z[i]>=36&&z[i]<=60)
			c++;
		else
			d++;
	}
	A=(double)a/(double)n*100.00;
	B=(double)b/(double)n*100.00;
	C=(double)c/(double)n*100.00;
	D=(double)d/(double)n*100.00;
	printf("1-18: %.2lf%%\n",A);
	printf("19-35: %.2lf%%\n",B);
	printf("36-60: %.2lf%%\n",C);
	printf("60??: %.2lf%%\n",D);
	return 0;
}

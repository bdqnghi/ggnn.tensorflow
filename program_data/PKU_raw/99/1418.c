int main(int argc, char* argv[])
{
	int n,i,p[101],a=0,b=0,c=0,d=0;
	double A,B,C,D;
	scanf("%d",&n);
	for (i=0;i<n;i++)
	{
		scanf("%d",&p[i]);
	}
	for (i=0;i<n;i++)
	{
		if (p[i]<=18)
		{a++;}
		if(p[i]>18&&p[i]<36)
		{b++;}
		if(p[i]>35&&p[i]<61)
		{c++;}
		if(p[i]>60)
		{d++;}
	}
	A=(double)a/n*100;
	B=(double)b/n*100;
	C=(double)c/n*100;
	D=(double)d/n*100;
	printf("1-18: %.2lf%%\n",A);
	printf("19-35: %.2lf%%\n",B);
	printf("36-60: %.2lf%%\n",C);
	printf("60??: %.2lf%%\n",D);
	return 0;
}

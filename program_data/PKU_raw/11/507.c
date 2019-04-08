
int main(int argc, char* argv[])
{
	int a,b,c,n;
	scanf ("%d%d%d",&a,&b,&c);
	if (a%4!=0||(a%100==0&&a%400!=0))
	{
		if (b<2)
			n=c;
		else if (b<3)
			n=31+c;
		else if (b<4)
			n=59+c;
		else if (b<5)
			n=90+c;
		else if (b<6)
			n=120+c;
		else if (b<7)
			n=151+c;
		else if (b<8)
			n=181+c;
		else if (b<9)
			n=212+c;
		else if (b<10)
			n=243+c;
		else if (b<11)
			n=273+c;
		else if (b<12)
			n=304+c;
		else
			n=334+c;
	}
	else
	{
		if (b<2)
			n=c;
		else if (b<3)
			n=31+c;
		else if (b<4)
			n=60+c;
		else if (b<5)
			n=91+c;
		else if (b<6)
			n=121+c;
		else if (b<7)
			n=152+c;
		else if (b<8)
			n=182+c;
		else if (b<9)
			n=213+c;
		else if (b<10)
			n=244+c;
		else if (b<11)
			n=274+c;
		else if (b<12)
			n=305+c;
		else
			n=335+c;
	}
	printf("%d\n",n);
	return 0;
}
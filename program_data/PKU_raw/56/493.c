int main(int argc, char* argv[])
{
	int n,y=0;
	scanf("%d",&n);
	while(n>9)
	{
		y=y+n-n/10*10;
		n=n/10;
		y*=10;
	}
	y=y+n;
	printf("%d\n",y);
	return 0;
}


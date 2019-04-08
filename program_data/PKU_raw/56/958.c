
int main()
{
	int i, x;
	scanf("%d", &x);
	for(i=1; i<=(int)log10(x)+1; i++)
		printf("%d", (x%(int)pow(10,i))/(int)(pow(10,i-1)));
	return 0;
}
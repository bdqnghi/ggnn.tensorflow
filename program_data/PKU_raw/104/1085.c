int main()
{
	int x, y;
	int i, j;
	scanf("%d%d",&x,&y);
	while (x != y)
	{
		if (x > y)
			x /= 2;
		else if (x < y)
			y /= 2;
	}
	printf("%d",x);
	return 0;
}
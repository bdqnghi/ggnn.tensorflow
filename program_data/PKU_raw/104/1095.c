int search (int n)
{
	return n/2;
}
int main ()
{
	int x, y;
	scanf("%d%d", &x, &y);
	while (x!=y) {
		if (x>y)
			x=search(x);
		else if(x<y)
			y=search(y);
	}
	printf("%d", x);
	return 0;
}
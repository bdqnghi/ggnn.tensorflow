int main()
{
	int n;
	void reverse(int n);
	scanf("%d",&n);
	reverse(n);
	return 0;
}
void reverse(int n)
{
	if(n < 1)
		return;
	printf("%d",n % 10);
	reverse(n / 10);
}

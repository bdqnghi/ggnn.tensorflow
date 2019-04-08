void main()
{
	int n;
	scanf("%d",&n);
	if(n%105==0)
		printf("3 5 7\n");
	if (n%5==0&&n%7!=0&&n%3==0)
		printf("3 5\n");
	if (n%3==0&&n%5!=0&&n%7==0)
		printf("3 7\n");
	if (n%5==0&&n%3!=0&&n%7==0)
		printf("5 7\n");
	if (n%3==0&&n%5!=0&&n%7!=0)
		printf("3\n");
	if (n%5==0&&n%3!=0&&n%7!=0)
		printf("5\n");
	if (n%7==0&&n%5!=0&&n%3!=0)
		printf("7\n");
	if (n%5!=0&&n%3!=0&&n%7!=0)
                      printf("n\n");
}
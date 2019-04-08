
int oper;
void p(int n);
int main()
{
	int num;
	scanf("%d", &num);
	oper = 0;

	if(num%3 == 0)
		p(3);
	if(num%5 == 0)
		p(5);
	if(num%7 == 0)
		p(7);
	if(num%3 != 0 && num%5 != 0 && num%7 != 0)
		printf("n");
	return 0;
}
void p(int n)
{
	if(oper)
		printf(" ");
	printf("%d", n);
	oper = 1;
}
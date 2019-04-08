int main(void)
{
	int a,three,five,seven,sum;
	scanf("%d",&a);
	three=(a%3==0);
	five=(a%5==0);
	seven=(a%7==0);
	sum=three+five+seven;
	if (sum==3)
		printf("3 5 7");
	if (sum==2)
		if (three==1)
		{
			printf("3");
			if (five==1)
				printf(" 5");
			else printf(" 7");
		}
		else printf("5 7");
	if (sum==1)
		if (three==1)
			printf("3");
		else if (five==1)
			printf("5");
		else printf("7");
	if (sum==0)
		printf("n");
}
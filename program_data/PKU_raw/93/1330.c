
int main()
{
	int a;
	scanf("%d",&a);
	if(a%3==0&&a%5==0&&a%7==0)
	printf("%d %d %d",3, 5, 7);
if(a%3==0&&a%5==0&&a%7!=0)
	printf("%d %d",3, 5);
if(a%3==0&&a%5!=0&&a%7==0)
	printf("%d %d",3, 7);
if(a%3!=0&&a%5==0&&a%7==0)
	printf("%d %d",5, 7);
if(a%3!=0&&a%5!=0&&a%7!=0)
	printf("n");
if(a%3==0&&a%5!=0&&a%7!=0)
	printf("%d",3);
if(a%3!=0&&a%5==0&&a%7!=0)
	printf("%d",5);
if(a%3!=0&&a%5!=0&&a%7==0)
	printf("%d",7);
	return 0;
}
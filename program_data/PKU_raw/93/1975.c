int main()
{
	int n, a;
	scanf("%d",&n);
	a=0;
	if (n%3==0)
		printf ("3");
	else a=1;
	if (n%5+a==0)
		printf(" 5");
        else if (n%5-a==-1) printf("5");
        else a=a+1;
	if (n%7==0&&a==1) printf(" 7");
        else if (n%7==0&&a==0) printf(" 7");
        else if (n%7==0&&a==2) printf("7");
	else a=3;
    if (n%3==0||n%5==0||n%7==0)
		a=1;
	else printf("n");
return 0;

}
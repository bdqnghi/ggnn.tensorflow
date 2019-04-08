
int main()
{
	int a;
   char n;
	scanf("%d",&a);
	if(a%3==0&&a%5==0&&a%7==0)printf("%s","3 5 7");
	else if(a%3==0&&a%5==0)printf("%s","3 5");
    else if(a%3==0&&a%7==0)printf("%s","3 7");
	else if(a%7==0&&a%5==0)printf("%s","5 7");
	else if(a%3==0)printf("%c",'3');
	else if(a%5==0)printf("%c",'5');
	else if(a%7==0)printf("%c",'7');
	else printf("%c",'n');
	return 0;
}

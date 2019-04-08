
int main()
{
	int a,b,c,i;
	scanf("%d",&i);
	a=i%3==0;
	b=i%5==0;
	c=i%7==0;
	if(a+b+c==3) printf("3 5 7\n");
	else if(a+b==2) printf("3 5\n");
	else if(a+c==2) printf("3 7\n");
	else if(b+c==2) printf("5 7\n");
	else if(a==1) printf("3\n");
	else if(b==1) printf("5\n");
	else if(c==1) printf("7\n");
	else printf("n\n");
	return 0;
}
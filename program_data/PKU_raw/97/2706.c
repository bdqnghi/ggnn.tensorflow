
int main()
{

int a,n100=0,n50=0,n20=0,n10=0,n5=0,n1=0;

scanf("%d", &a);

while(a/100>0)
{
	n100=n100+1;
	a=a-100;
}

while(a/50>0)
{
	n50++;
	a=a-50;
}

while(a/20>0)
{
	n20++;
	a=a-20;
}

while(a/10>0)
{
	n10++;
	a=a-10;
}

while(a/5>0)
{
	n5++;
	a=a-5;
}

n1=a;

printf("%d\n%d\n%d\n%d\n%d\n%d\n",n100,n50,n20,n10,n5,n1);

return 0;
}
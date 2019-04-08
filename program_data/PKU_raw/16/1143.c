
int main(int argc, char* argv[])
{
	int a,i;
	scanf("%d", &a);
	for (i=1;i<=4;i++)
	{
	    printf("%d", a%10);
		a=a/10;
		if (a<1) break;
	}	
	return 0;
}
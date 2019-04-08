int f(int n);
int main(int argc, char* argv[])
{
	int m,p,i;
	scanf("%d",&p);
	for(i=0;i<p;i++)
	{
		scanf("%d",&m);
		printf("%d\n",f(m));
	}
	return 0;
}

int f(int n)
{
	int result;
	if(n==1||n==2)
		result=1;
	else
		result=f(n-1)+f(n-2);
	return result;
}
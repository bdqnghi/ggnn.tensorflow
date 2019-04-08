
void reverse(int n);
int main()
{
	int n;
	int i;
	for (i=1;i<=6;i++)
	{
		scanf("%d",&n);
		reverse(n);
	}
	return 0;
}
void reverse(int n)
{
	int a[12];
	int tmp;
	int i,j;
	int state=0;
	tmp=(n>=0)? n:-n;
	for (j=0;tmp>=1;j++)
	{
		a[j]=tmp%10;
		tmp/=10;
	}
	if (n<0)
	{
		printf("-");
	}
	for (i=0;i<j;i++)
	{
		if (state)
		{
			printf("%d",a[i]);
		}
		else
		{
			if (a[i]!=0 &&state==0)
			{
				printf("%d",a[i]);
				state=1;
			}
		}
	}
	if (!state)
	{
		printf("0");
	}
	printf("\n");
}
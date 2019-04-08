
int main()
{
	int a;
	scanf("%d",&a);
	int n[100];
	int i;
	for(i=0;i<a;i++)
	{
		scanf("%d",&n[i]);
	}
	int max=n[0];
	int j;
	for(j=1;j<a;j++)
	{
		if (n[j]>max)
		{
			max=n[j];
		}
	}
	printf("%d",max);
	int next=n[0];
	int q;
	for(q=1;q<a;q++)
	{
		if(n[q]>=next&&n[q]<max)
		{
			next=n[q];
		}
	}
	printf("\n%d\n",next);
	return 0;
}

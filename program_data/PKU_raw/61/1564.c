int F(int n);
int main()
{
	int n,i;
	int a[10];
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		printf("%d\n",F(a[i]));
	}
	return 0;
}



int F(int n)
{
    if (n<=2)
        return 1;
    return F(n-1)+F(n-2);
} 


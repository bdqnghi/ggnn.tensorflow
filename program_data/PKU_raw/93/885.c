int main()
{
	int n,i,j=3,flag=0;
	scanf("%d",&n);
	for (i=3;i<=7;i+=2)
	{
		if (n%i==0&&flag==0) 
		{
			printf("%d",i);
			flag=1;
		}
		else if (n%i==0&&flag==1) printf(" %d",i);
		else j--;
	}
	if (j==0) printf ("n");
	return 0;
}
int main()
{
	int n,i,j,k;
	int b=0;
	scanf("%d",&n);
	k=sqrt(n)+1;
	for (i=5;i<n+1;i++)
	{
		for (j=2;j<i;j++)
			if (i%j==0||(i-2)%j==0)
				break;
			if (j>i-3)
			{
				printf("%d %d\n",i-2,i);
				b=b+1;
			}
	}
	if (b==0) printf("empty\n");
	return 0;
}


int sushu(int a)
{   int i,gha;
    if (a%2==0)
	{  
		return 0;
	}
    gha=(int)sqrt(a);
	for (i=3;i<=gha;i+=2)
	{
		if (a%i==0)  return 0;
	}
	return 1;
}

int main()
{
	int n,i,j;
    scanf("%d",&n);
	for (i=6;i<=n;i+=2)
	{
		for (j=2;j<=i/2;j++)
		{   
			if (sushu(j) && sushu(i-j))
			{   printf("%d=%d+%d\n",i,j,i-j);
			    break;
			}
		}
	}

	return 0;
}

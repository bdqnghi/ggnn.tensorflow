int main()
{
	int m,i,j,k,l;
	scanf("%d",&m);
	for (i=3;i<=(m/2);i++)
	{
		for (j=2;j<=i;j++)
		{
			if (i%j==0)
				break;
		}
		for (k=2;k<=m-i;k++)
		{
			if((m-i)%k==0)
				break;
		}
		if (i==j)
		{
			if(m-i==k)
			{
				printf("%d",i);printf(" ");printf("%d\n",(m-i));
			}
		}
	}
}

			
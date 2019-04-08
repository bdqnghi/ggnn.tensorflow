
int main()
{
	int x=0,y=0,z=1,n,i,j;
	scanf("%d",&n);
	for (i=3;i<=n;i++)
	{
		x=y;y=z;z=1;
		for (j=2;j<i;j++)
			if (i%j==0) z=0;
		if (x && z) printf("%d %d\n",i-2,i);
	}
	if (n<5) printf("empty");
	return 0;
}
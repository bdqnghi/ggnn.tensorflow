int main()
{
	int m,n,i,j,k,a=0,b=0,z[100],zz=0,wan[9],wei,num;
	scanf("%d %d",&m,&n);
	for(i=m,a=0,b=0,wei=0;i<=n;i++)
	{
		a=0;
		b=0;
		for(j=0;j<9;j++)
			wan[j]=0;
		k=sqrt(i);
		for(j=2;j<=k;j++)
			if(i%j==0)
				break;
		if(j>k) a++;
		num=i;
		for(j=0;j<9;j++)
		{
			wan[j]=num%10;
			num=num/10;
			wei=j;
			if(num<1) break;
		}
		for(j=0;j<=wei;j++)
		{
			if(wan[j]!=wan[wei-j]) break;
		}
		if(j>wei) b++;
		if(a*b!=0)
		{
			z[zz]=i;
			zz++;
		}
	}
	if(zz==0) printf("no");
	else
	{
		for(i=0;i<zz;i++)
		{
			if(i==0) printf("%d",z[i]);
			else printf(",%d",z[i]);
		}
	}
	printf("\n");
	return 0;
}
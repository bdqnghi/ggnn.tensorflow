int main()
{
	int n;
	int a[5];
	int i,j;
	scanf("%d",&n);
	for (i=0;i<5;i++)
	{
		a[i]=n%10;
		n=n/10;
	}
	if (a[4]==0 && a[3]==0 && a[2]==0 && a[1]==0) printf("%d",a[0]);
	else
		if (a[4]==0 && a[3]==0 && a[2]==0) printf("%d%d",a[0],a[1]);
		else
			if (a[4]==0 && a[3]==0) printf("%d%d%d",a[0],a[1],a[2]);
			else
				if (a[4]==0) printf("%d%d%d%d",a[0],a[1],a[2],a[3]);
				else printf("%d%d%d%d%d",a[0],a[1],a[2],a[3],a[4]);
	return 0;
}
int main()
{
	int n,a,b,sa=0,sb=0;
	int i;
	scanf("%d",&n);
	for (i=1;i<=n;i++)
	{
		scanf("%d%d",&a,&b);
		if (a==b) continue;
		else if	(a==0&&b==1) sa++;
		else if (a==1&&b==0) sb++;
		else if (a==1&&b==2) sa++;
		else if (a==2&&b==1) sb++;
		else if (a==2&&b==0) sa++;
		else if (a==0&&b==2) sb++;
	}
	if (sa>sb) printf("A\n");
	else if (sb>sa) printf("B\n");
	else printf("Tie\n");
}
	
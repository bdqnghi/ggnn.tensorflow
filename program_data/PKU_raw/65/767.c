int main()
{
	int n,ta=0,tb=0,i,a,b;
	scanf("%d",&n);
	for (i=1;i<=n;i++)
	{
		scanf("%d%d",&a,&b);
		if (a==b) continue;
		if (a==1)
		  if (b==2) ta++;
		  else tb++;
        else if (a==2)
          if (b==1) tb++;
          else ta++;
        else if (a==0)
          if (b==1) ta++;
          else tb++;
	}
	if (ta>tb) printf("A\n");
	else if (ta<tb) printf("B\n");
	else printf("Tie\n");
}
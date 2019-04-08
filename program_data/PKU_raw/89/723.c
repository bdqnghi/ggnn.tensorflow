int main ()
{
	int a,b,c,n,i,s[10000]={0},z[10000]={0};
	scanf ("%d",&n);
	for (i=0;1;i++)
	{
		scanf ("%d %d",&a,&b);
		if (a==0&&b==0)
			break;
		s[a]=1;
		z[b]=z[b]+1;
	}
	for (i=0;i<n;i++)
	{
		if (s[i]==0)
			c=i;
	}
	if (z[c]==n-1)
		printf("%d\n",c);
	else 
		printf ("NOT FOUND");
	return 0;
}
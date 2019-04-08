int main()
{
	int i,m,n,k,j,l;
	scanf("%d %d",&n,&m);
	while (m>0)
	{i=3;
	   l=fmod(m,2);
	   while (i<=n)
	   {
		   l=fmod(m+l,i);
		   i++;
	   }
		printf("%d\n",l+1);
		scanf("%d %d",&n,&m);
	}
	return 7;
}

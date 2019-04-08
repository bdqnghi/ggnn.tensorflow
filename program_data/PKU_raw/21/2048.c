int main()
{
	int n,k[50],i,l=0,s=0;
	float m=0;
	scanf("%d",&n);
	for(i=0;i<n;i++)
		scanf("%d,",&k[i]);
	for(i=0;i<n;i++)
		m=m+k[i];
	m=m/n;
	for(i=0;i<n;i++)
	{
		if(k[i]>l)
			l=k[i];
	}
	s=l;
	for(i=0;i<n;i++)
	{
		if(k[i]<s)
			s=k[i];
	}

	if((l-m)>(m-s))
		printf("%d",l);
	else if((l-m)<(m-s))
		printf("%d",s);
	else
		printf("%d,%d",s,l);
	return 0;
}
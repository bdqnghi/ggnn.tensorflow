int main()
{
	int a[1000],b[1000],m[1000]={0},i=1,j=1,l,max;
	char c;
	scanf("%d",&a[0]);
	while((c=getchar())==',')
		scanf("%d",&a[i++]);
	scanf("%d",&b[0]);
	while((c=getchar())==',')
		scanf("%d",&b[j++]);
	l=i-1;
	for(i=0;i<1000;i++)
		for(j=0;j<=l;j++)
		{
			if(i>=a[j]&&i<b[j])
				m[i]++;
		}
	max=m[0];
	for(i=0;i<1000;i++)
	{
		if(m[i]>max) max=m[i];
	}

	printf("%d %d\n",l+1,max);
	return 0;
}
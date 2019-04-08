void main()
{
	char c[501];
	int i,j,k,l,a[500],m,y,max;
	scanf("%d%s",&k,c);
	l=strlen(c);
	for(i=0;i<=l;i++) a[i]=1;
	i=0;
	while(i<=l)
	{
		j=i+1;
		while(j<=l)
		{
			y=1;
			for(m=0;m<k;m++) 
			{
				if(c[m+j]!=c[i+m]) y=0;
			}
			if(y) 
			{
				a[i]++;
				a[j]=0;
			}
			j++;
		}
		i++;
	}
	max=0;
	for(i=0;i<=l;i++)
	{
		if(a[i]>a[max]) max=i;
	}
	if(a[max]==1) printf("NO");
	else
	{
		printf("%d\n",a[max]);
	for(i=0;i<=l;i++)
	{
		if(a[i]==a[max])
		{
			for(m=0;m<k;m++) printf("%c",c[i+m]);
			printf("\n");
		}
	}}
}
int main()
{
	char v[N];
	int n,i,j,a,b;
	int sign;

	scanf("%d",&n);
	for (i=0;i<n;i++)
		v[i]=1;
	while (1)
	{
		scanf("%d %d",&a,&b);
        if (a==0 && b==0)
			break;
		if (a!=b)
	    	v[a]=0;
	}
	sign=0;
	for (i=0;i<n;i++)
		if (v[i]==1)
		{
				if (sign==0)
					sign=1;
				printf("%d\n",i);

		}
	if (sign==0)
		printf("NOT FOUND\n");    
	return 0;
}
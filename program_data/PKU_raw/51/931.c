int main()
{
	int n,a[500],h,i,o,z,m,b,l,t,f=0,u,k=0;
	char c[500];
	scanf("%d",&n);
	getchar();
	gets(c);
	for(h=0;h<500;h++)
	{
		a[h]=0;
	}
	b=strlen(c);
	t=b-n;
	for(i=0;i<=t;i++)
	{
		for(o=i;o<=t;o++)
		{
			for(u=0;u<=n-1;u++)
			{
				if (c[i+u]==c[o+u])
					k+=1;
			}
			if(k==n)
				a[i]+=1;
			k=0;
		}
	}
	z=a[0];
	for(l=1;l<=t;l++)
	{
		if(a[l]>z)
		{
			f=l;
			z=a[l];
		}
	}
	if(z==1)
		printf("NO");
	else
	{
		printf("%d",z);
		for(m=0;m<=t;m++)
		{
			if (a[m]==z)
			{
				printf("\n%c",c[m]);
				for(u=1;u<=n-1;u++)
				{
					printf("%c",c[m+u]);
				}
			}
		}
	}
	return 0;
}
int main()
{
	int a,max=0,maxi=0,p=0,q=0;
	char b;
	scanf("%d",&a);
	b=getchar();
	while(b==',')
	{
		p++;
		if(a>max)
		{
			maxi=max;
			max=a;
		}
		else if(a==max)
			q++;
		else if(a>maxi)
			maxi=a;
		scanf("%d",&a);
		b=getchar();
	}
	p++;
	if(a>max)
	{
		maxi=max;
		max=a;
	}
	else if(a==max)
		q++;
	else if(a>maxi)
		maxi=a;

	if(p==1)
		printf("No");
	else if(p==(q+1))
		printf("No");
	else
	    printf("%d",maxi);
	return 0;
}


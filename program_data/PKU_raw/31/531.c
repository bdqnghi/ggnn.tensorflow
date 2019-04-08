main()
{
	int n=0;
	struct b
	{
		char a[60];
	}d,*q[10000];
	while(1)
	{
		gets(d.a);
		if(d.a[0]=='e')
			break;
		q[n]=(struct b *)malloc(sizeof(struct b));
		*q[n]=d;
		n++;
	}
	while(n--)
	{
		puts(q[n]->a);
	}
}
int sushu(int w)
{
	int c,d;
	d=1;
	c=2;
	while(c<=w-1)
	{
		if(w%c==0)
		{
			d=0;
		break;
		}
		c++;
	}
	return d;
}

	int main()
{
	int m,p;
	scanf("%d",&m);
	p=3;
	while(p<=m/2)
	{
		if (sushu(p)&&sushu(m-p))
			printf("%d %d\n",p,m-p);
		p++;
	}
	return 0;
}
void main()
{
	char a[6][50]={0},(*p)[50],*q;
	int n,b[6]={0},*w;
	for(p=a;p<a+6;p++)
	{
		gets(p);
	}
	for(p=a,w=b;p<a+6;p++,w++)
	{
        n=strlen(p);
		if(**p=='-')
		{
		
			for(q=*p+n-1;q>*p;q--)
                *w=(*w)*10+(*q-'0');
			*w=-*w;
		}
		else
			for(q=*p+n-1;q>=*p;q--)
				*w=(*w)*10+(*q-'0');
	}
    for(w=b;w<b+6;w++)
		printf("%d\n",*w);
}
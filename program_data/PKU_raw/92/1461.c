void main()
{
	void paixu(int *a,int *b,int c);
	void max(int *a,int *b,int n);
    int a[1001][1001],b[1001][1001],c[1001];
    int i=0,e;
    int *j;
    int *s;
    s=c;
    leap:scanf("%d",s);
    if(*s!=0)
    {	
    	for(j=*(a+i);j<*(a+i)+*s;j++)
    	scanf("%d",j);
    	for(j=*(b+i);j<*(b+i)+*s;j++)
    	scanf("%d",j);
    	i++;
    	s++;
    	goto leap;
    }
    for(e=0;e<i;e++)
    paixu(*(a+e),*(b+e),*(c+e));
    for(e=0;e<i;e++)
    max(*(a+e),*(b+e),*(c+e));
}
void max(int *a,int *b,int n)
{
	int i,j,m;
	int *r;
	int d[1001]={0};
	r=d;
	for(i=0;i<n;i++)
	{
		int s=0,t=0;
		for(j=0;j<n-i;j++)
		{
			if(*(a+j)>*(b+j+i))
			s++;
			else
			{
				if(*(a+j)==*(b+j+i))
				t++;
			}
		}
		for(j=0;j<i;j++)
		{
			if(*(a+n-i+j)>*(b+j))
			s++;
			else
			{
				if(*(a+n-i+j)==*(b+j))
				t++;
			}
		}
		*(r+i)=200*s-200*(n-t-s);
	}
	r=d;
	m=*r;
	for(r=d+1;r<n+d;r++)
	{
		if(*r>m)
		m=*r;
	}
	printf("%d",m);
	printf("\n");
}
void paixu(int *a,int *b,int c)
{
	int g;
	int *d,*f;
	for(d=a;d<a+c-1;d++)
	{
		for(f=d+1;f<a+c;f++)
		{
			if(*f>*d)
			{
				g=*d;
				*d=*f;
				*f=g;
			}
		}
	}
	for(d=b;d<b+c-1;d++)
	{
		for(f=d+1;f<b+c;f++)
		{
			if(*f>*d)
			{
				g=*d;
				*d=*f;
				*f=g;
			}
		}
	}
}
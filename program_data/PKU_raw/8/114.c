
	int a[100]={0}, b[100]={0};
	int i=0,j=0,I,J;

void main()
{
	void load();	//a)  ??void load()????????????????????????static??????
	void order(int a[], int b[]);	//b)  ??void order(int a[], int b[])?????????????? 
	void conflate(int a[], int b[]);	//c)  ??void conflate(int a[], int b[])???????????b????a??????
	void print(int a[]);//d)  ??void print(int a[])???????????????a????

	load();
	order(a,b);
	conflate(a,b);
	print(a);
}

void load()
{

	scanf("%d %d", &i,&j);
	I=i;J=j;
	for (i=0;i<I;i++)
		scanf("%d",&a[i]);
	for (j=0;j<J;j++)
		scanf("%d",&b[j]);
}

void order(int a[], int b[])
{
	void xu(int x[], int y);

	xu(a,I);
	xu(b,J);
}

void xu(int x[], int y)
{
	int *p, *q, *temp,t;
	p=x;
	for (i=0;i<y-1;i++)
	{
		p=&x[i];
		for (j=i+1;j<y;j++)
		{
			q=&x[j];
			if (*p>*q){temp=p;p=q;q=temp;}
		}
		if (p!=&x[i]) {t=*p;*p=x[i];x[i]=t;}

	}
}

void conflate(int a[], int b[])
{
	for (i=I;i<I+J;i++)
	{
		a[i]=b[i-I];
	}
}

void print(int a[])
{
	for(i=0;i<I+J;i++)
	{
		printf("%d",a[i]);
		if (i<I+J-1) printf(" ");
	}
}
int a[200],b[100];
int a1,b1;

void read()
{	int i,j;
	scanf("%d %d",&a1,&b1);
	for(i=0;i<a1;i++)
	{	scanf("%d",&a[i]);
	}
	for(j=0;j<b1;j++)
	{	scanf("%d",&b[j]);
	}
}

void ex(int *a,int *b)
{	int temp;
	temp=*a;
	*a=*b;
	*b=temp;
}
	
void bubblesort1(int *p,int m,int n)
{	int i,j;
	for(i=n;i>0;i--)
		for(j=m;j<i;j++)
			if(*(p+j)>*(p+j+1))
				ex(p+j,p+j+1);
}

void sort()
{}


void and()
{	int i;
	for(i=0;i<b1;i++)
	{	a[a1+i]=b[i];
	}
}

void prt()
{int i;
	for(i=0;i<a1+b1;i++)printf("%d%c",a[i],(i<a1+b1-1)?' ':'\n');	
}
void main()
{
	read();
	bubblesort1(a,0,a1-1);bubblesort1(b,0,b1-1);
	and();
	prt();
}

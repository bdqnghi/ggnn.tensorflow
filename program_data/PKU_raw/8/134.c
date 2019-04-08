int n1,n2,a1[100],a2[100];
void main()
{
	void scan(),rank(),combine(),print();
	scan();
	rank();
	combine();	
	print();
}

void scan()
{
	int i;
	scanf("%d %d\n",&n1,&n2);
	for (i=0;i<n1;i++) scanf("%d",&a1[i]);
	for (i=0;i<n2;i++) scanf("%d",&a2[i]);
}

void rank()
{
	int i,j,mid;
	for(j=0;j<n1-1;j++)
		for (i=0;i<n1-1-j;i++)
			if (a1[i]>a1[i+1])
			{ mid=a1[i];a1[i]=a1[i+1];a1[i+1]=mid;}
	for(j=0;j<n2-1;j++)
		for (i=0;i<n2-1-j;i++)
			if (a2[i]>a2[i+1])
			{ mid=a2[i];a2[i]=a2[i+1];a2[i+1]=mid;}
}

void combine()
{
	int i;
	for (i=n1;i<n1+n2;i++) a1[i]=a2[i-n1];
}

void print()
{
	int i;
	for (i=0;i<n1+n2;i++) 
	{
		if(i!=0) printf(" ");
		printf("%d",a1[i]);
	}
}

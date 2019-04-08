void input();
void arrange();
void add();
void output();
int a[100],b[100],c[200],n1,n2;
void main()
{
	input();
	arrange();
	add();
	output();
}
void input()
{
	int i,j;
	scanf("%d %d",&n1,&n2);
	for(i=0;i<n1;i++)
		scanf("%d",&a[i]);
	for(j=0;j<n2;j++)
		scanf("%d",&b[j]);
}

void arrange()
{
	int i,j,temp;
	for(i=0;i<n1;i++)
		for(j=i;j<n1;j++)
			if(a[i]>a[j])
		{
			temp=a[i];
			a[i]=a[j];
			a[j]=temp;
		}
	for(i=0;i<n2;i++)
		for(j=i;j<n2;j++)
			if(b[i]>b[j])
		{
			temp=b[i];
			b[i]=b[j];
			b[j]=temp;
		}
}
void add()
{
	int i;
	for(i=0;i<n1;i++)
	{c[i]=a[i];}
	for(i=n1;i<n1+n2;i++)
	{c[i]=b[i-n1];}
}

void output()
{
	int i;
	for(i=0;i<n1+n2;i++)
	{
		printf("%d",c[i]);
		if(i<n1+n2-1) printf(" ");
		else printf("\n");
	}

}
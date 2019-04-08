static int a[100],b[100],c[300];
char z;
void scan()
{   static int m,n,i;
    scanf("%d%d",&m,&n);
    for(i=0;i<=99;i++)
    {
    	a[i]=0;
    	b[i]=0;
    }
    for (i=0;z!='\n';i++)
    {
    	scanf("%d%c",&a[i],&z);
    }
    z=1;
     for (i=0;z!='\n';i++)
    {
    	scanf("%d%c",&b[i],&z);
    }
}
 void ord()
 {
	int i,j,temp;
	for(i=0;a[i]!='\0';i++)
	{
		for(j=i+1;a[j]!='\0';j++)
		{
			if(a[i]>a[j])
			{
				temp=a[i];
				a[i]=a[j];
				a[j]=temp;
				
			}
		}
	}
	for(i=0;b[i]!='\0';i++)
	{
		for(j=i+1;b[j]!='\0';j++)
		{
			if(b[i]>b[j])
			{
				temp=b[i];
				b[i]=b[j];
				b[j]=temp;
				
			}
		}
	}
}
void bin()
{
static int i,j,s;
for (i=0;i<=299;i++)
{

	c[i]=0;
}
	for (i=0;a[i]!='\0';i++)
	{
		c[i]=a[i];
	}
	for (j=0;b[j]!='\0';j++)
	{
		c[j+i]=b[j];
	}
}

void print()
{   int i; 
    printf("%d",c[0]);
	for(i=1;c[i]!=0;i++)
	printf(" %d",c[i]);
	
} 

int main()
{
	scan();
	ord();
	bin();
	print();
}
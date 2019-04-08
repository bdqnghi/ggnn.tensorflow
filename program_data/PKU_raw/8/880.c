void shuru(int a[],int b[]);
void paixu(int a[]);
void hebing(int a[],int b[]);
void shuchu(int a[]);
void main()
{
	int a[100]={0}, b[100]={0};
	shuru(a,b);
	paixu(a); paixu(b);
	hebing(a,b);
	shuchu(a);
}

void shuru(int a[],int b[])
{
	int m, n, i;
	scanf("%d %d",&m,&n);
	for(i=0; i<m; i++)
		scanf("%d",&a[i]);
	for(i=0; i<n; i++)
		scanf("%d",&b[i]);
}

void paixu(int a[])
{
	int i, j, temp, len=0;
	for(i=0; a[i]!=0; i++)
		len++;
	for(j=1; j<len; j++)
	{
		for(i=0; i<len-j; i++)
		{
			if(a[i]>a[i+1])
			{
				temp=a[i];
				a[i]=a[i+1];
				a[i+1]=temp;
			}
		}
	}
}

void hebing(int a[],int b[])
{
	int i, lena=0, lenb=0;
	for(i=0; a[i]!=0; i++)
		lena++;
	for(i=0; b[i]!=0; i++)
		lenb++;
	for(i=0; i<lenb; i++)
		a[i+lena]=b[i];
}

void shuchu(int a[])
{
	int i;
	printf("%d",a[0]);
	for(i=1; a[i]!=0; i++)
		printf(" %d",a[i]);
}
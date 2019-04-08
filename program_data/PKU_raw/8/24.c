
int a1[100],a2[100];
int n1,n2;
int a[200];

void shuru()
{
	int i;
	scanf("%d %d",&n1,&n2);
	for(i=0;i<n1;i++)
		scanf("%d",&a1[i]);
	for(i=0;i<n2;i++)
		scanf("%d",&a2[i]);

}

void paixu(int b1[],int b2[],int m1,int m2)
{
	int i,j,t;
	for(i=0;i<m1-1;i++)
		for(j=0;j<m1-1-i;j++)
			if(b1[j]>b1[j+1])
			{
				t=b1[j];
				b1[j]=b1[j+1];
				b1[j+1]=t;
			}
	for(i=0;i<m2-1;i++)
		for(j=0;j<m2-1-i;j++)
			if(b2[j]>b2[j+1])
			{
				t=b2[j];
				b2[j]=b2[j+1];
				b2[j+1]=t;
			}
}

void hebing(int c1[],int c2[],int m1,int m2)
{
	int i,j;
	for(i=0;i<m1;i++)
		a[i]=c1[i];
	for(j=0;j<m2;j++)
	{
		a[i]=c2[j];
		i++;
	}
}

void shuchu(int d[],int m1,int m2)
{
	int i;
	for(i=0;i<(m1+m2);i++)
	{
		if(i<m1+m2-1)
			printf("%d ",d[i]);
		else
			printf("%d\n",d[i]);
	}
}

void main()
{
	shuru();
	paixu(a1,a2,n1,n2);
	hebing(a1,a2,n1,n2);
	shuchu(a,n1,n2);
}

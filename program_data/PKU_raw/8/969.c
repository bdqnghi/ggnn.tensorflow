int scan()
{
	int m;
	scanf("%d",&m);
	return m;
}
int fuzhi(int a[],int n)
{
	int i,k;
	for(i=0;i<n;i++)
	{
		scanf("%d",&k);
		a[i]=k;
	}
	return 0;
}
int paixu(int b[],int n)
{
	int i,j,temp;
	for(i=1;i<n;i++)
	{
		for(j=0;j<n-i;j++)
		{
			if(b[j]>b[j+1])
			{
				temp=b[j];
				b[j]=b[j+1];
				b[j+1]=temp;
			}
		}
	}
	return 0;
}
int print(int c[],int d[],int m3,int m4)
{
	int i=0;
	for(i=0;i<m3;i++)
	{
		printf("%d ",c[i]);
	}
	for(i=0;i<m4;i++)
	{
		printf("%d",d[i]);
		if(i!=m4-1)
		{
			printf(" ");
		}
	}
	return 0;
}



int main()
{
	int m1;
	int m2;
	int x[100];
	int y[100];
	m1=scan();
	m2=scan();
	fuzhi(x,m1);
	fuzhi(y,m2);
	paixu(x,m1);
	paixu(y,m2);
	print(x,y,m1,m2);
	return 0;
}

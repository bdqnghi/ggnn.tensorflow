int main()
{
    int n,m,a[100]={0},b[100]={0};
	scanf("%d%d",&n,&m);
	void type(int array[],int n);
	void order(int array[],int q);
	void join(int array1[],int array2[],int q1,int q2);
	void out(int array[],int q1,int q2);
	type(a,n);
	type(b,m);
	order(a,n);
	order(b,m);
	join(a,b,n,m);
	out(a,n,m);
}

int type(int array[],int n)
{
	int c;
	for (c=0;c<n;c++)
	{
		scanf("%d",&array[c]);
	}
}

int order(int array[],int q)
{
	int i,j,t;
	for (i=0;i<q-1;i++)
	{
		for (j=0;j<q-1;j++)
		{
			if (array[j]>=array[j+1])
			{
				t=array[j+1];
				array[j+1]=array[j];
				array[j]=t;
			}
		}
	}
}

int join(int array1[],int array2[],int q1,int q2)
{
	int k;
	for (k=0;k<q2;k++)
	{
		array1[q1+k]=array2[k];
	}
}

int out(int array[],int q1,int q2)
{
	int k;
	for (k=0;k<q1+q2-1;k++)
	{
		printf("%d ",array[k]);
	}
	printf("%d\n",array[q1+q2-1]);
}








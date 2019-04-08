
void sort(int a[], int l, int r)
{	
	int t,i,j;
	t=a[l];i=l;j=r;
	do{
		while(i<j&&t>=a[j]) j--;
		if(i<j)
		{
			a[i]=a[j];i++;
			while(j>i&&t<=a[i]) i++;
			if(i<j)
			{
				a[j]=a[i];
				j--;
			}
		}
	}while(i<j);
	a[i]=t;i++;j--;
	if(i<r) sort(a,i,r);
	if(l<j) sort(a,l,j);
}

int r(int a,int b)
{
	if(a>b) return -200;
	else if(a==b) return 0;
	else return 200;
}

void main()
{
	int a[1000],b[1000];
	int f[2][1001];
	int n,i,j,max,t;
	scanf("%d",&n);
	while(n!=0)
	{
		for(i=0;i<n;i++)
			scanf("%d",&b[i]);
		for(i=0;i<n;i++)
			scanf("%d",&a[i]);

		sort(a,0,n-1);
		sort(b,0,n-1);
		t=0;
		for(j=0;j<=n;j++)
		{
			f[0][j]=0;
			f[1][j]=0;
		}
		for(i=1;i<=n;i++)
		{
			t=1-t;
			for(j=0;j<=i;j++)
			{	
				if(j==0) 
					f[t][j]=f[1-t][j]+r(a[i-1],b[n-i+j]);
				else if(i==j)
					f[t][j]=f[1-t][j-1]+r(a[i-1],b[j-1]);
				else
					f[t][j]=MAX(f[1-t][j]+r(a[i-1],b[n-i+j]),f[1-t][j-1]+r(a[i-1],b[j-1]));
			}
		}
		max=~0u>>1^~0u;
		for(i=0;i<=n;i++)
			if(f[t][i]>max) max=f[t][i];

		printf("%d\n",max);

		scanf("%d",&n);
	}
}
int a[100],b[100],c[200];
int m,n;
 void input();
 void sort();
 void combine();
 void output();
int main()
{
  input();
  sort();
  combine();
  output();
return 0;
}
void input()
{
	scanf("%d%d",&m,&n);
	for(int i=0;i<m;i++)
	{
		scanf("%d",&a[i]);
	}
	for(int j=0;j<n;j++)
	{
		scanf("%d",&b[j]);
	}
}
void sort()
{
	for(int p=1;p<m;p++)
	{
		for(int i=0;i<(m-p);i++)
		{
			if(a[i]>a[i+1])
			{
				int temp;
				temp=a[i];
				a[i]=a[i+1];
				a[i+1]=temp;
			}
		}
	}
	for(int p=1;p<n;p++)
	{
		for(int i=0;i<(n-p);i++)
		{
			if(b[i]>b[i+1])
			{
				int temp;
				temp=b[i];
				b[i]=b[i+1];
				b[i+1]=temp;
			}
		}
	}
}
void combine()
{
	for(int i=0;i<m;i++)
	{
		c[i]=a[i];
	}
	for(int j=0;j<n;j++)
	{
		c[m+j]=b[j];
	}
}
void output()
{
	for(int i=0;i<(m+n);i++)
	{
		printf("%d",c[i]);
		if(i<(m+n-1))
			printf(" ");
	}
}



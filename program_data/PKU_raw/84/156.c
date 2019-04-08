int main()
{
	int n,i,c,d,t;
	t=0;
	scanf("%d",&n);
	int a[100];
	for(i=0;i<=(n-1);i++)
		scanf("%d",&a[i]);
	for(c=0;c<=(n-2);c++)
	{
		for(d=(n-1);d>=(c+1);d--)
		{
			if(a[d]>a[d-1])
			{
				t=a[d-1];
			    a[d-1]=a[d];
				a[d]=t;
			}
		}
	}
	printf("%d\n",a[0]);
	printf("%d\n",a[1]);
	return 0;

}
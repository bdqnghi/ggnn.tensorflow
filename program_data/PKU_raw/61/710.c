
int main(int argc, char* argv[])
{
	int a[100];
	int m,n;
	a[0]=1;
	a[1]=1;
	scanf("%d",&m);
	for(int i=1;i<=m;i++)
	{
		scanf("%d",&n);
		for(int q=2;q<n;q++)
		{
				a[q]=a[q-1]+a[q-2];
			
		}
		printf("%d\n",a[n-1]);
	}
  	return 0;
}

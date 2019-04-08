int main()
{
	int a[100];
	int n;
	scanf("%d",&n);
	int i;
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	int max,sec;
	max=a[0];
	sec=a[0];
	for(i=1;i<n;i++)
	{if(a[i]>max)
			max=a[i];
	 if(a[i]<max&&a[i]>sec)
		    sec=a[i];
	}
	printf("%d\n%d\n",max,sec);
}

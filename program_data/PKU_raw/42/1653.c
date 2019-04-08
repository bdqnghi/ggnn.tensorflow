void main(){
	long int n,i,j,c=0;
	int a[100000],k;
	scanf("%ld",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	scanf("%d",&k);
	for(i=0;i<n-c;)
	{
		if(a[i]==k)
		{
			c++;
			for(j=i+1;j<n;j++)
			{
				a[j-1]=a[j];
			}
		}
		else i++;
	}
	for(i=0;i<n-c;i++)
	{
		printf("%d",a[i]);
		if(i!=n-c-1) printf(" ");
	}
}
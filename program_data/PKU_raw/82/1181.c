int main()
{
	int n,i,a[100],b[100],n1=0,n2=0;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		scanf("%d %d",&a[i-1],&b[i-1]);
	    if(a[i-1]>=90 && a[i-1]<=140 && b[i-1]<=90 && b[i-1]>=60)
		{
			n1++;
			if(n1>n2)
			{
				n2=n1;
			}
		}
		else 
			n1=0;
		
	}
	printf("%d\n",n2);
	return 0;
}



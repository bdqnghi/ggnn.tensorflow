void main()
{
	int huige(int a);
	int n,i,j,l,a[50000];
	int k;
	scanf("%d",&n);
	a[0]=2;
	j=1;
	for(i=3;i<n;i=i+2)
	{
		if(huige(i)==1)
		{
			a[j]=i;
			j++;		
		}
	}
	for(l=6;l<=n;l=l+2)
	{
		k=0;
        for(i=0;i<j;i++)
		{ 
		    if (huige(l-a[i])==1)
			{
			printf("%d=%d+%d\n",l,a[i],l-a[i]);
			k=1;
			}
		if(k==1)
			break;
		}
	}
}
int huige(int a)
{
	int i;
	int m=1;
	for(i=3;i<=sqrt(a);i++)
	{
		if(a%i==0)
			m=0;
	}
	if(a%2==0)
		m=0;
	return(m);
}

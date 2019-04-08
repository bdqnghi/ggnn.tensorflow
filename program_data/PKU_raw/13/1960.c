int main()
{
	int n,i,j,a[20001];
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
		for(j=0;j<i;j++)
		{
			if(a[i]==a[j])
	         break;
			else	
		    continue;	

		}
		if(j==i)
		{	
			if(i==0)
			printf("%d",a[i]);
			else
             printf(" %d",a[i]);
		}
		else
			continue;
	}
}
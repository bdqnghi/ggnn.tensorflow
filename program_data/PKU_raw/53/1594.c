int main()
{
	int a[300],n,i,j,b[300]={0},s=0;
	scanf("%d",&n);
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	for(i=0;i<n;i++)
	{
		if(!b[i])
		{
			if(s)printf(",");
			printf("%d",a[i]);
			s=1;}
		for(j=i+1;j<n;j++)
			if(a[i]==a[j])
				b[j]=-1;
	}
}
